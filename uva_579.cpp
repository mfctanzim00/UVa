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

    char k;
    double hr, mi;

    while(scanf("%lf %c %lf", &hr, &k, &mi)!=EOF){
        if(hr==0.00 && mi==0.00){
            break;
        }
        double angle = (mi*6)-(hr*30)-(mi/float(2)), ans;
        ans = angle;
        if(angle<0){
            angle=360+angle;
        }
        angle = min(angle, 360-angle);
        printf("%.3f\n", angle);
    }




    return 0;
}
