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
vector<int>neg, pos, v, v2;

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll n, k, a, b, c, t = 1, same, q;
    //cin >> t;

    while(cin >> n){
            if(n){
                    ll g = 0;
                    for(ll i=1; i<n; i++){
                            for(ll j=i+1; j<=n; j++){
                                     g+=(__gcd(i, j));
                            }
                    }
                    cout << g << endl;
            }
            else{
                    break;
            }
    }
    return 0;
}
