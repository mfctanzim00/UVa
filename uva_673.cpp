#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
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
const ll mx = 4010;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c, d;
    cin >> t;
    getchar();
    while(t--){
              char x[150];
              gets(x);
              stack<char>s;
              bool ok = true;
              for(ll i=0; i<strlen(x); i++){
                        char ch = x[i];
                        if(ch=='('|| ch=='['){
                                   s.push(ch);
                        }
                        else if(ch==')' || ch==']'){
                                   if(!s.size()){
                                            ok = false;
                                            break;
                                   }
                                   else{
                                            char xx = s.top();
                                            //s.pop();
                                            if(ch==']' && xx=='['){
                                                          s.pop();
                                                          continue;
                                            }
                                            else if(ch==')' && xx=='('){
                                                          s.pop();
                                                          continue;
                                            }
                                            else{
                                                          ok = false;
                                                          break;
                                            }
                                   }
                        }
              }
              if(s.size()){
                        ok = false;
              }
              cout << (ok? "Yes": "No") << endl;
    }
    return 0;
}
