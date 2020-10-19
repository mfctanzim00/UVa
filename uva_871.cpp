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
const ll mx = 1e5+7;

int posx[]= {1,0,-1,0,1,-1,1,-1};
int posy[]= {0,1,0,-1,1,-1,-1,1};
int cnt, rowlen, collen;
string str[100];

void Dfs(int i, int j)
{
    str[i][j]='0';
    cnt++;
    for(int k=0; k<8; k++)
    {
        int row = i+posx[k];
        int col = j+posy[k];
        if(row>=0&&row<rowlen && col>=0&&col<collen)
        {
            if(str[row][col]=='1')
                Dfs(row, col);
        }
    }
}

int main()
{

    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t, n, k;
    string s;
    cin >> t;
    getline(cin,s);
    getline(cin,s);
    while(t--)
    {
        int mx = 0;
        rowlen = 0;
        collen = 0;
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            str[rowlen]=s;
            collen = s.length();
            rowlen++;
        }
        for(int i=0; i<rowlen; i++)
        {
            for(int j=0; j<collen; j++)
            {
                if(str[i][j]=='1')
                {
                    cnt = 0;
                    Dfs(i, j);
                    mx = max(mx, cnt);
                }
            }
        }
        cout << mx << endl;
        if(t)
            cout << endl;
    }

    return 0;
}
