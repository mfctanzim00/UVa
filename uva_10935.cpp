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
             read:
             cin >> n;
             if(!n){
                     break;
             }
             deque<ll>dq;
             for(ll i=1; i<=n; i++){
                      dq.push_back(i);
             }
             printf("Discarded cards:");
             ll cnt = 0;
             while(dq.size()>1){
                      k = dq.front();
                      dq.pop_front();
                      cnt++;
                      ll x = dq.front();
                      dq.push_back(x);
                      printf(" %lld", k);
                      if(cnt!=n-1){
                                printf(",");
                      }
                      dq.pop_front();
             }
             cout << "\nRemaining card: " << dq.front() << endl;
             dq.pop_front();
             goto read;
    }
    return 0;
}
