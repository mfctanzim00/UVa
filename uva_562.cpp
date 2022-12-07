#include<bits/stdc++.h>
using namespace std;
#define bug(a) cerr<<#a<<" : "<<a<<endl;
using ll = long long;

int vis[101][50001], col, arr[101];
int ans, sum;

void solve(int idx, int curSum)
{
    if(idx<0){
         int x = sum-curSum;
         ans = min(ans, abs(curSum-x));
         return;
    }
    if(vis[idx][curSum]==col)return;
    vis[idx][curSum]=col;

    solve(idx-1, curSum);
    solve(idx-1, curSum+arr[idx]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1, n, m, k;
    cin >> tc;

    while(tc--){
            cin >> n;
            sum=0; ++col;
            for(int i=1; i<=n; i++){
                    cin>>arr[i];
                    sum+=arr[i];
            }
            ans = INT_MAX;
            solve(n, 0);
            cout << ans << endl;
    }
    return 0;
}
