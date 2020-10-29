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
int parent[mx];

int Find_par(int src)
{
    if(parent[src]==src)
        return src;
    return parent[src] = Find_par(parent[src]);
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    int t=1, n, k, m, a, b, c, d;
    cin >> t;

    while(t--){
             cin >> n;
             for(int i=1; i<=n; i++){
                      parent[i] = i;
             }
             string s;
             char ch;
             int yes = 0, no = 0;

             getline(cin, s);
             while(getline(cin, s), s!=""){
                      stringstream ss;
                      ss << s;
                      ss >> ch >> a >> b;

                      if(ch=='q'){
                                  int uPr = Find_par(a);
                                  int vPr = Find_par(b);

                                  if(uPr==vPr) yes++;
                                  else no++;
                      }
                      else{
                                 int uPr = Find_par(a);
                                 int vPr = Find_par(b);

                                 if(uPr!=vPr){
                                         parent[uPr] = vPr;
                                 }
                      }
             }
             cout << yes << "," << no << '\n';
             if(t)cout << '\n';
    }
    return 0;
}

