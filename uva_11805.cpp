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

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t, a, b, c, cn = 1;
    cin >> t;
    while(t--){
        printf("Case %lld: ", cn++);
        cin >> a >> b >> c;
        ll ans = c%a;
        if(!ans){
            cout << b << endl;
        }
        else{
            if(ans+b<=a){
                cout << b+ans << endl;
            }
            else{
                cout << ans-a+b << endl;
            }
        }
    }

    return 0;
}
