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

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int n, m, k, a, b, c, t = 1, same, q, jj = 1;
    scanf("%d", &t);

    while(t--){
              int s, t, u, w;
              scanf("%d %d %d %d", &n , &m, &s, &t);
              vector<pair<int, int > >v[20000+1];
              map<pair<int, int>, int>cost;
              vector<int>dis(20000+1);

              fill(dis.begin(), dis.end(), INT_MAX);
              while(m--){
                        cin >> a >> b >> w;
                        v[a].pb({b, w});
                        v[b].pb({a, w});
              }
              priority_queue<int>pq;
              int src = s;
              pq.push(src);
              dis[src] = 0;
              while(!pq.empty()){
                         int x = pq.top();
                         pq.pop();
                         for(auto xx: v[x]){
                                   if(xx.ss+dis[x]<dis[xx.ff]){
                                                     pq.push(xx.ff);
                                                     dis[xx.ff] = xx.ss+dis[x];
                                   }
                         }
              }
              if(dis[t]==INT_MAX){
                         printf("Case #%d: unreachable\n", jj++);
              }
              else{
                        printf("Case #%d: %d\n",jj++, dis[t]);
              }
              cost.clear();
    }
    return 0;
}

