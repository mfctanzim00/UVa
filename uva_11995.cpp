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

    ll t=1, n, k, m, a, b, c, d;
    //cin >> t;

    while(t--){
              while(scanf("%lld", &n)!=EOF){
                           bool stk = true, que = true, p = true;
                           stack<ll>s;
                           queue<ll>q;
                           priority_queue<ll>pq;
                           while(n--){
                                     scanf("%lld %lld", &a, &b);
                                     if(a==1){
                                              s.push(b);
                                              q.push(b);
                                              pq.push(b);
                                     }
                                     else{
                                              if(pq.size() && pq.top()==b){
                                                         pq.pop();
                                              }
                                              else{
                                                         p = false;
                                              }
                                              if(s.size() && s.top()==b){
                                                         s.pop();
                                              }
                                              else{
                                                         stk = false;
                                              }
                                              if(q.size() && q.front()==b){
                                                         q.pop();
                                              }
                                              else{
                                                         que = false;
                                              }
                                     }
                           }
                           if(!que&&!stk&&!p){
                                     printf("impossible\n");
                           }
                           else if((que&&stk&&p) || (que&&(stk||p)) || (stk&&(que||p)) || (p&&(stk||que))){
                                     printf("not sure\n");
                           }
                           else if(que){
                                     printf("queue\n");
                           }
                           else if(stk){
                                     printf("stack\n");
                           }
                           else{
                                     printf("priority queue\n");
                           }
              }
    }
    return 0;
}
