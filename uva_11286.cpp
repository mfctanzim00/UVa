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
    //cin >> t;

    while(t--){
              read:
              cin >> n;
              if(n==0){
                      continue;
              }
              map<vector<ll>, ll>mp;
              while(n--){
                        vector<ll>v(5);
                        for(auto &i: v){
                                  cin >> i;
                        }
                        sort all(v);
                        mp[v]++;
              }
              ll mx_comb = 0, cnt = 0;
              for(auto x: mp){
                        mx_comb = max(mx_comb, x.ss);
              }
              for(auto x: mp){
                        cnt+=(x.ss==mx_comb);
              }
              cnt*=mx_comb;
              cout << cnt << endl;
              goto read;
    }
    return 0;
}
