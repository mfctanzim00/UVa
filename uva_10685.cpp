#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
#define   ll         long long
#define   ull        unsigned long long
#define   pb         push_back
#define   ff         first
#define   ss         second
#define   all(v)     (v.begin(), v.end())
#define   rall(v)    (v.rbegin(), v.rend())
#define   pi         acos(-1.0)
#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define   bug(a)     cerr << #a << " : " << a << endl
using namespace std;
const ll mod = 1e9+7;
const ll mx = 2e6+10;

int posx[] = {1,-1, 0, 0};
int posy[] = {0, 0, 1,-1};
int parent[mx], child_cnt[mx];

int Find_par(int src)
{
    if(parent[src]==src)
        return src;
    return parent[src] = Find_par(parent[src]);
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t=1, n, k, m, a, b, c, d;
    //cin >> t;

    while(1){
             cin >> n >> m;
             if(n==0 && m==0)break;
             int cnt = 0;
             map<string, int>mp;

             for(int i=0; i<n; i++){
                       string x;
                       cin >> x;
                       if(!mp[x])
                            mp[x]=++cnt;
             }
             for(int i=1; i<=cnt; i++){
                       parent[i] = i;
                       child_cnt[i] = 1;
             }

             int mx = 0;
             while(m--){
                       string str, str2;
                       cin >> str >> str2;
                       int u = mp[str], v = mp[str2];

                       int uPr = Find_par(u);
                       int vPr = Find_par(v);

                       if(uPr!=vPr){
                                parent[uPr] = vPr;
                                child_cnt[vPr]+=child_cnt[uPr];
                       }
             }
             for(int i=1; i<=cnt; i++)
                    mx = max(mx, child_cnt[i]);
             cout << mx << '\n';
    }
    return 0;
}
