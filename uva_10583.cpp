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
int parent[mx], cs;

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
             if(n==0&&m==0)break;
             for(int i=1; i<=n; i++){
                       parent[i] = i;
             }
             int ret = 0;

             while(m--){
                       int u, v;
                       cin >> u >> v;
                       int uPr = Find_par(u);
                       int vPr = Find_par(v);

                       if(uPr!=vPr){
                                parent[uPr] = vPr;
                       }
             }
             for(int i=1; i<=n; i++){
                       ret+=(parent[i]==i);
             }
             cout << "Case " << ++cs << ": " << ret << '\n';
    }
    return 0;
}

