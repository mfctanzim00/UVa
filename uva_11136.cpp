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

    ll n, k, a, b, c, t = 1, same, q;
    //cin >> t;

    while(scanf("%lld", &n)){
             if(!n){
                       break;
             }
              ll ans = 0;
              multiset<ll>ms;
              while(n--){
                         cin >> k;
                         while(k--){
                                   cin >> a;
                                   ms.insert(a);
                         }
                         if(!ms.size()){
                                  continue;
                         }
                         auto it = ms.begin();
                         auto it2 = ms.end();
                         it2--;
                         ans+=(*it2-*it);
                         ms.erase(it);
                         ms.erase(it2);
              }
              cout << ans << endl;
    }
    return 0;
}
