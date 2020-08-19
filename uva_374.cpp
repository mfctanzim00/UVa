#include<bits/stdc++.h>
#include<cstring>
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

ll bigmod(ll a, ll b, ll c)
{
    if(b==0)
        return 1;
    else if(!(b&1))
    {
        ll x = bigmod(a, b/2, c);
        return (x*x)%c;
    }
    else
    {
        ll x = a%c;
        ll y = bigmod(a, b-1, c);
        return (x*y)%c;
    }
}

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll a, b, c;
    while(cin >> a >> b >> c)
    {
        cout << bigmod(a, b, c) << endl;
    }


    return 0;
}
