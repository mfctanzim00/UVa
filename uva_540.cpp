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

    ll t=1, n, k, m, a, b, c, d, cs = 1;

    while(t--){
             while(1){
                      cin >> n;
                      if(!n){
                              break;
                      }

                      map<ll, ll>mp, vis;
                      queue<ll>q[n+1], q2;
                      vis.clear();
                      mp.clear();

                      for(ll i=0; i<n; i++){
                               cin >> a;
                               vector<ll>v(a);
                               for(ll j=0; j<a; j++){
                                         cin >> v[j];
                                         mp[v[j]] = i;
                               }
                      }
                      cout << "Scenario #" << cs++ << endl;
                      while(1){
                              hell:
                              string x;
                              cin >> x;
                              if(x[0]=='S'){
                                         cout << endl;
                                         break;
                              }
                              if(x[0]=='E'){
                                         cin >> c;
                                         ll num = mp[c];
                                         if(!vis[num]){
                                                    q2.push(num);
                                                    vis[num] = true;
                                         }
                                         q[num].push(c);

                              }
                              else{
                                         ll x;
                                         while(1){
                                                    if(!q2.size()){
                                                             goto hell;
                                                    }
                                                    x = q2.front();
                                                    if(q[x].size()){
                                                            break;
                                                    }
                                                    vis[x] = false;
                                                    q2.pop();
                                         }

                                         cout << q[x].front() << endl;
                                         q[x].pop();
                                         if(q[x].empty()){
                                                    q2.pop();
                                                    vis[x] = false;
                                         }
                              }
                      }

             }
    }
    return 0;
}
