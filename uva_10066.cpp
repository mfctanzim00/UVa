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
const ll mx = 1e9+7;

int posx[] = {1,-1, 0, 0};
int posy[] = {0, 0, 1,-1};
int dp[1005][1005], n, m;
int arr[1005], arr2[1005];

int LCS(int i, int j)
{
    if(i==n || j==m)
        return 0;

    if(~dp[i][j])
        return dp[i][j];

    ll len1=0, len2=0, ret=0;

    if(arr[i]==arr2[j])
    {
        ret+=(1+LCS(i+1, j+1));
    }
    else
    {
        len1+=LCS(i+1, j);
        len2+=LCS(i, j+1);
        ret+=max(len1, len2);
    }
    return dp[i][j]=ret;
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t=1, cs=1;
    //cin >> t;

    while(1)
    {
        cin >> n >> m;
        if(n==0&&m==0)break;
        memset(dp, -1, sizeof(dp));

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<m; i++)
            cin >> arr2[i];

        cout << "Twin Towers #" << cs++ << endl;
        cout << "Number of Tiles : " << LCS(0, 0) << endl << endl;
    }
    return 0;
}

