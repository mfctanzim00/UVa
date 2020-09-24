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

    ll t=1, n, k, m, a, b, c, d;
    //cin >> t;

    while(t--){
              while(1){
                       cin >> n;
                       vector<ll>v;
                       if(!n){
                              break;
                       }
                       cin >> a;
                       v.pb(a);
                       read:
                       for(ll i=1; i<n; i++){
                                cin >> a;
                                v.pb(a);
                       }
                       stack<ll>s;
                       k=1;
                       for(auto x: v){
                                for(ll j=k; j<=x && k<=n; j++){
                                        s.push(j);
                                        k++;
                                }
                                if(s.top()==x){
                                        s.pop();
                                }
                       }
                       if(s.size()){
                                cout << "No" << endl;
                                while(s.size()){
                                         s.pop();
                                }
                       }
                       else{
                                cout << "Yes"  << endl;
                       }
                       cin >> a;
                       if(!a){
                                cout << endl;
                       }
                       else{
                                v.clear();
                                v.pb(a);
                                goto read;
                       }
              }
    }
    return 0;
}
