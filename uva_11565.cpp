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

    ll n, a, b, k, c, t = 1, same, q, x, y, z;
    cin >> t;

    while(t--){
             map<ll,ll>mp2;
             cin >> a >> b >> c;
             mp2[a]++, mp2[b]++, mp2[c]++;
             bool ok = false;
             k = sqrt(c);
             for(ll i=-k; i<=k; i++){
                    for(ll j=-k; j*j-i*i<=c; j++){
                             x = i, y = j;
                             z = a-x-y;
                             if(x==y || y==z || z==x){
                                      continue;
                             }
                             else if(x*y*z!=b){
                                      continue;
                             }
                             else if(x*x+y*y+z*z!=c){
                                      continue;
                             }
                             ok = true;
                             break;
                    }
                    if(ok){
                           break;
                    }
             }
             if(ok){
                    cout << x << " " << y << " " << z << endl;
             }
             else{
                    cout << "No solution." << endl;
             }
    }
    return 0;
}
