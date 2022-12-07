#include<bits/stdc++.h>
using namespace std;
int dp[1130][15][196], col, arr[101];
vector<int>prime;
int sz=196; // prime;

void pre()
{
    vector<bool>mrk(1200);
    for(int i=2; i<1200; i++){
          if(!mrk[i]){
                prime.push_back(i);
                for(int j=i*2; j<1200; j+=i){
                       mrk[j]=true;
                }
          }
    }
    for(int i=0; i<1130; i++){
          for(int j=0; j<15; j++){
                for(int k=0; k<196; k++){
                       dp[i][j][k]=-1;
                }
          }
    }
   // bug(prime.size());
}

int rec(int n, int k, int idx)
{
    if(n==0)return (k==0);
    if(n<0 || k<0 || idx==sz)return 0;

    if(~dp[n][k][idx])return dp[n][k][idx];

    return dp[n][k][idx] = rec(n, k, idx+1) + rec(n-prime[idx], k-1, idx+1);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int tc=1, n, m, k;
   // cin >> tc;

    pre();
    while(true){
            cin >> n >> k;
            if(n==0 && k==0)break;
            cout << rec(n, k, 0) << endl;
    }
    return 0;
}
