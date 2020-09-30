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
     //freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c, d;
    //cin >> t;

    while(t--){
              string x;
              deque<string>dq;
              while(cin>>x){
                         string res = "";
                         ll last = 0, _1=0;
                         for(ll i=0; i<x.size(); ){
                                    char ch = x[i];
                                    if(ch==']'){
                                              i++;
                                              if(res.empty()){
                                                       last = 0;
                                                       continue;
                                              }
                                              if(last){
                                                       dq.pb(res);
                                                       last = 0;
                                                       res.clear();
                                                       continue;
                                              }
                                              dq.push_front(res);
                                              res.clear();
                                              last = 0;
                                    }
                                    else if(ch=='['){
                                              last = 0;
                                              if(res.size()){
                                                        dq.pb(res);
                                                        res.clear();
                                              }
                                              i++;
                                              while(x[i]!=']' && i<x.size()){
                                                        if(x[i]=='['){
                                                                 if(res.size()){
                                                                          dq.push_front(res);
                                                                          res.clear();
                                                                 }
                                                                 i++;
                                                                 continue;
                                                        }
                                                        res+=x[i];
                                                        i++;
                                              }
                                    }
                                    else{
                                              last = 1;
                                              res+=x[i];
                                              i++;
                                    }
                         }
                         if(res.size()){
                                    if(last){
                                             dq.pb(res);
                                    }
                                    else{
                                            dq.push_front(res);
                                    }
                         }
                         for(auto x: dq){
                                    cout << x;
                         }
                         cout << endl;
                         dq.clear();
              }
    }
    return 0;
}
