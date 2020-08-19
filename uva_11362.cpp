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
const ll mx = 4010;

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
    cin >> t;

    while(t--){
             cin >> n;
             vector<string>v;
             while(n--){
                       string x;
                       cin >> x;
                       v.pb(x);
             }
             bool ok = true;
             sort all(v);
             for(ll i=1; i<v.size()&&ok; i++){
                       if(v[i].size()> v[i-1].size()){
                                 ll cnt = 0;
                                 for(ll j=0; j<v[i-1].size()&&ok; j++){
                                           if(v[i][j]==v[i-1][j]){
                                                    cnt++;
                                                    continue;
                                           }
                                 }
                                 if(cnt==v[i-1].size()){
                                           ok = false;
                                 }
                       }
             }
             cout << (!ok? "NO" : "YES") << endl;
    }
    return 0;
}
