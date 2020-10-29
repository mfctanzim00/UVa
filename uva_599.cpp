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
int parent[26], child_cnt[26];

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
             string str, ch;
             for(int i=0; i<26; i++){
                       parent[i] = i;
                       child_cnt[i] = 1;
             }
             vector<pair<int, int> >connection;
             while(cin >> ch){
                       if(ch[0]=='*')break;
                       int u = ch[1]-'A', v = ch[3]-'A';
                       connection.pb({u, v});
             }
             cin >> str;
             int total_char = (str.size()-str.size()/2);  ///Subtracting Comma from the string
             int tree = total_char, acorn = 0;

             for(auto x: connection){
                       int uPr = Find_par(x.ff);
                       int vPr = Find_par(x.ss);

                       if(uPr!=vPr){
                                tree--;
                                parent[uPr] = vPr;
                                child_cnt[vPr] += child_cnt[uPr];
                       }
                       //cout << "Hi --> " <<x.ff << " " << uPr << " " << x.ss << " " << vPr << endl;
             }
             for(int i=0; i<str.size(); i+=2){
                       int x = str[i]-'A';
                       if(parent[x]==x&&child_cnt[x]==1) acorn++;
             }
             tree-=acorn;   ///As dot(acorn) is not tree
             cout << "There are " << tree << " tree(s) and " << acorn << " acorn(s)." << '\n';
    }
    return 0;
}

