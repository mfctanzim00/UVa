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

    ll t=1, n, k, m, a, b, c, d, cs = 1, l;
    cin >> t;

    while(t--){
              string x;
              cin >> l >> m;
              l*=100;
              queue<ll>q[2];
              while(m--){
                       cin >> a >> x;
                       if(x=="left"){
                                 q[0].push(a);
                       }
                       else{
                                 q[1].push(a);
                       }
              }
              ll f = 0, res = 0;
              while(q[f].size() || q[f^1].size()){
                       ll s = 0;
                       while(1){
                                 if(q[f].size()){
                                           if(s+q[f].front()<=l){
                                                      s+=q[f].front();
                                                      q[f].pop();
                                           }
                                           else{
                                                      break;
                                           }
                                 }
                                 else{
                                           break;
                                 }
                       }
                       res++;
                       f^=1;
              }
              cout << res << endl;
    }
    return 0;
}
