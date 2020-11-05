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

    ll t=1, n, k, m, a, b, c, d, cs = 0;
    //cin >> t;

    while(1){
            ll have[15], need[15];

            for(ll i=0; i<=12; i++){
                     cin >> have[i];
                     if(i==0&&have[0]<0)
                          goto read;
            }
            for(ll i=0; i<12; i++){
                     cin >> need[i];
            }

            cout << "Case " << ++cs << ":" << endl;
            for(ll i=0; i<12; i++){
                     if(have[i]-need[i]>=0){
                             have[i+1]+=(have[i]-need[i]);
                             cout<<"No problem! :D" << endl;
                     }
                     else{
                             have[i+1]+=have[i];
                             cout<<"No problem. :(" << endl;
                     }
            }
    }
    read: ;
    return 0;
}

