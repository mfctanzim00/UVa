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

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, a, b, c;
    cin >> t;
    vector<pair<ll, pair<ll, ll> > >v;
    map<pair<ll, pair<ll, ll> >, string>name;
    ll mx_year = 0, mn_year = INT_MAX;

    while(t--){
              string person;
              ll day, month, year;
              cin >> person >> day >> month >> year;
              v.pb({day, {month, year}});
              name[{day, {month, year}}] = person;
              mn_year = min(mn_year, year);
              mx_year = max(mx_year, year);
    }
    vector<ll>d, m;
    map<ll, ll>mp, mp2;
    string ans;
    for(ll i=0; i<v.size(); i++){
              ll x = v[i].ss.ss;
              if(x==mx_year){
                       m.pb(v[i].ss.ff);
                       mp[i]++;
                       ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
              }
    }
    if(m.size()==1){
              cout << ans << endl;
    }
    else{
              ans.clear();
              sort all(m);
              reverse all(m);
              for(ll i=0; i<v.size(); i++){
                       if(mp[i]&& v[i].ss.ff==m[0]){
                                  d.pb(v[i].ff);
                                  mp2[i]++;
                                  ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
                       }
              }
              if(d.size()==1){
                       cout << ans << endl;
              }
              else{
                       ans.clear();
                       sort all(d);
                       reverse all(d);
                       for(ll i=0; i<v.size(); i++){
                                  if(mp2[i]&&v[i].ff==d[0]){
                                           ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
                                           break;
                                  }
                       }
                       cout << ans << endl;
              }
    }
    ans.clear();
    mp.clear();
    mp2.clear();
    d.clear();
    m.clear();

    for(ll i=0; i<v.size(); i++){
              ll x = v[i].ss.ss;
              if(x==mn_year){
                       m.pb(v[i].ss.ff);
                       mp[i]++;
                       ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
              }
    }
    if(m.size()==1){
              cout << ans << endl;
    }
    else{
              ans.clear();
              sort all(m);
              for(ll i=0; i<v.size(); i++){
                       if(mp[i]&& v[i].ss.ff==m[0]){
                                  d.pb(v[i].ff);
                                  mp2[i]++;
                                  ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
                       }
              }
              if(d.size()==1){
                       cout << ans << endl;
              }
              else{
                       ans.clear();
                       sort all(d);
                       for(ll i=0; i<v.size(); i++){
                                  if(mp2[i]&&v[i].ff==d[0]){
                                        ans = name[{v[i].ff, {v[i].ss.ff, v[i].ss.ss}}];
                                  }
                       }
                       cout << ans << endl;
              }
    }

    return 0;
}
