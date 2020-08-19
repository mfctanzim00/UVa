#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define all(v) (v.begin(), v.end())
#define pi acos(-1.0)
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define bug(a) cerr << #a << " : " << a << endl
using namespace std;
const ll mx = 1e6+10;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
vector<ll>v[mx], dis(mx);
map<ll, ll>vis;

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll n, k, a, b, c, t = 1, same, q;
    //cin >> t;

    while(scanf("%lld", &n)){
                   ll query;
                   set<ll>s;
                   queue<ll>q;
                   for(ll i=0; i<mx; i++){
                            v[i].clear();
                   }
                   if(!n){
                            break;
                   }
                   while(n--){
                            cin >> a >> b;
                            v[a].pb(b);
                            v[b].pb(a);
                            s.insert(a);
                            s.insert(b);
                   }
                   while(1){
                            cin >> a >> b;
                            ll ans = 0;
                            if(!a && !b){
                                        break;
                            }
                            fill(dis.begin(), dis.end(), 0);
                            q.push(a);
                            vis[a] = true;
                            while(q.size()){
                                         ll x = q.front();
                                         q.pop();
                                         for(auto node: v[x]){
                                                     if(vis[node]){
                                                              continue;
                                                     }
                                                     dis[node]+=dis[x]+1;
                                                     if(dis[node]>b){
                                                              break;
                                                     }
                                                     ans++;
                                                     vis[node] = true;
                                                     q.push(node);
                                         }
                            }
                            vis.clear();
                            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", t++, s.size()-1-ans, a, b);
                   }
    }
    return 0;
}
