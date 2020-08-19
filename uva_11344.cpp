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
    ll t, n;
    cin >> t;
    getchar();
    while(t--)
    {
        string str;
        cin >> str >> n;
        ll arr[n], r = 0;
        bool ok = false;
        for(int i=0 ; i<n; i++)
        {
            cin >> arr[i];
            for(int j=0; j<str.size(); j++)
                r = ((str[j] - '0') + r*10) % arr[i];
            if(r)
                ok = true;
        }
        ok ? cout << str << " - Simple." << endl : cout << str << " - Wonderful." << endl;
    }

    return 0;
}

