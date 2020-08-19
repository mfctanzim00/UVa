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
#define pq dp
using namespace std;
const ll mx = 4010;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
bool v[6000][6000];

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c;
    //cin >> t;

    double h, u, d, f;
    bool ok;

    while (cin >> h >> u >> d >> f)
    {
        if (h == 0)
            break;

        f = f*u / 100.0;
        double cur = 0;
        int day = 0;

        while (true){
                day++;
                cur += u;
                u -= f;
                if(u<0)
                     u = 0;
                if(cur>h){
                     ok = true;
                     break;
                }
                cur-=d;
                if(cur<0){
                     ok = false;
                     break;
                }
        }
        if(ok)
             cout << "success";
        else{
             cout << "failure";
        }

        cout << " on day " << day << endl;
    }


    return 0;
}

