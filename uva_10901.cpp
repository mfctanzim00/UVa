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
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c, d, cs = 1;
    cin >> t;

    while(t--){
              cin >> n >> k >> m;

              queue<pair<ll, ll> >q[2];
              vector<ll>res(m);
              ll time = 0, f = 0;

              for(ll i=0; i<m; i++){
                        string x;
                        cin >> a >> x;
                        if(x=="left"){
                                  q[0].push({a, i});
                        }
                        else{
                                  q[1].push({a, i});
                        }
              }

              while(1){
                        ll time2 = 0;
                        if(q[f].empty()&&q[f^1].empty()){
                                  break;
                        }
                        if(q[f].size()&&q[f^1].size()){
                                  pair<ll, ll>p = q[f].front(), p2 = q[f^1].front();
                                  time2 += min(p.first, p2.first);
                        }
                        else if(q[f].size()){
                                  pair<ll, ll>p = q[f].front();
                                  time2 += p.first;
                        }
                        else{
                                 pair<ll, ll>p = q[f^1].front();
                                 time2 += p.first;
                        }
                        time = max(time, time2);
                        ll round = n;
                        while(round--){
                                  if(q[f].size()){
                                           pair<ll, ll>p = q[f].front();
                                           if(p.first>time){
                                                      break;
                                           }
                                           res[p.second] = time+k;
                                           q[f].pop();
                                  }
                                  else{
                                           break;
                                  }
                        }
                        f^=1;
                        round = n;
                        time+=k;
              }
              for(auto x: res){
                        cout << x << endl;
              }
              if(t){
                        cout << endl;
              }
    }
    return 0;
}
