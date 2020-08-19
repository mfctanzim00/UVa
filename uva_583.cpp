#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>
#define ll long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define bug(a) cerr << #a << " : " << a << endl
using namespace std;

void primeFactors(ll n)
{
    cout << n << " = ";
    ll k = n, z = 1;
    if(n<0)
        n *= (-1), cout << -1, z = 0;
    while (n%2 == 0)
    {
        if(k<0 || !z)
            cout << " x ";
        cout << 2;
        n = n/2;
        z = 0;
    }
    for (ll i=3; i<=sqrt(n); i=i+2)
    {
        while (n%i == 0)
        {
            if(k<0 || !z)
                cout << " x ";
            cout << i;
            n = n/i;
            z = 0;
        }
    }
    if (n > 2)
    {
        if(!z)
            cout << " x ";
        cout << n;
    }
    cout << endl;
}

int main()
{
    FastRead
    ll n;
    //cin >> n;
    while(cin >> n)
    {
        if(n==0)
            break;
        primeFactors(n);
    }

    return 0;
}
