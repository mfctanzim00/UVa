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
ll parent[mx], child_cnt[mx];

ll Find_par(ll r)
{
    if(parent[r]==r)
        return r;
    return parent[r] = Find_par(parent[r]);
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, cnt=0, d;
    cin >> t;

    while(t--){
            cin >> n;
            map<string, ll>mp;
            for(ll i=1; i<=2*n; i++){
                    parent[i] = i;
                    child_cnt[i] = 1;
            }
            while(n--){
                    string x, y;
                    cin >> x >> y;
                    ll u, v;
                    if(!mp[x]){
                             mp[x] = ++cnt;
                    }
                    u = mp[x];
                    if(!mp[y]){
                             mp[y] = ++cnt;
                    }
                    v = mp[y];

                    ll uPr = Find_par(u), vPr = Find_par(v);
                    if(uPr!=vPr){
                              parent[uPr] = vPr;
                              child_cnt[vPr] += child_cnt[uPr];
                    }
                    cout << child_cnt[vPr] << '\n';
            }
    }
    return 0;
}
