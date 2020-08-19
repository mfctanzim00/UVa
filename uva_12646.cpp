#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>
#define ll long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define bug(a) cerr << #a << " : " << a << endl
using namespace std;
int main()
{
    //FastRead
    ll a, b, c;
    while(scanf("%lld %lld %lld", &a, &b, &c)==3)
    {
        //cin >> a >> b >> c;
        if((a==0 && b==0 && c==0)||(a==1 && b==1 && c==1))
            cout << "*" << endl;
        else if((a==1 && b==0 && c==0) || (a==0 && b==1 && c==1))
            cout << "A" << endl;
        else if((a==0 && b==0 && c==1) || (a==1 && b==1 && c==0))
            cout << "C" << endl;
        else if((a==0 && b==1 && c==0) || (a==1 && b==0 && c==1))
            cout << "B" << endl;
    }
    return 0;
}

