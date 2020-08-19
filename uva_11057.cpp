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

    while(scanf("%lld", &n)!=EOF){
              map<ll, ll>mp;
              for(ll i=1; i<=n; i++){
                         cin >> k;
                         mp[k]++;
              }
              cin >> n;
              ll left = n/2, right = n/2;
              if(n&1){
                         right++;
              }
              ll ans = -1, x, y;
              while(ans==-1){
                         if(left==right){
                                   if(mp[left]==2&& left+right==n){
                                             x = y = left, ans = 1;
                                   }
                                   else{
                                             left--, right++;
                                   }
                         }
                         else{
                                   if(mp[left]&&mp[right] && left+right==n){
                                             x = left, y = right;
                                             ans = 1;
                                   }
                                   else{
                                             left--, right++;
                                   }
                         }
              }
              printf("Peter should buy books whose prices are %lld and %lld.\n\n", x, y);
    }
    return 0;
}
