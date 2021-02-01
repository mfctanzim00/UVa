#include<bits/stdc++.h>
#include<cstring>
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
const ll mod = 1e9+7;
const ll mx = 2e6+10;

int posx[] = {1,-1, 0, 0};
int posy[] = {0, 0, 1,-1};

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
            cin >> a >> b;
            ll sq=sqrt(a);
            ll ret=0;

            for(ll i=1; i<=sq; i++){
                    if(a%i==0){
                            if(i%b!=0)ret+=i;
                            if(a/i!=i){
                                   if((a/i)%b!=0)ret+=(a/i);
                            }
                    }
            }
            cout << ret << endl;
    }
    return 0;
}
