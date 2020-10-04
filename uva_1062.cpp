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
const ll mx = 1e9+7;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, d, cs = 1;
    //cin >> t;

    while(t--){
              read:
              string x;
              cin >> x;
              if(x=="end"){
                         break;
              }
              map<ll, bool>vis;
              ll ret = 0;
              reverse all(x);
              for(ll i=0; i<x.size(); i++){
                         if(vis[i])continue;
                         ll last = i;
                         for(ll j=i+1; j<x.size(); j++){
                                     if(vis[j])continue;
                                     if(x[last]<=x[j]){
                                                vis[j] = true;
                                                last = j;
                                     }
                         }
                         ret++;
              }
              printf("Case %lld: %lld\n", cs++, ret);

              goto read;
    }
    return 0;
}
