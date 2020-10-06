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

    ll t=1, n, k, m, a, b, c, d, cs = 1, l;
    cin >> t;
    hell:
    while(t--){
              cin >> n >> k;
              queue<pair<ll,ll> >q;
              map<ll, ll>mp;
              for(ll i=0; i<n; i++){
                        cin >> a;
                        q.push({a, i});
                        mp[a]++;
              }
              ll res = 0;
              while(1){
                        pair<ll, ll>p = q.front();
                        bool ok = false;
                        for(ll i=p.first+1; i<10; i++){
                                    if(mp[i]){
                                              ok = true;
                                              break;
                                    }
                        }
                        if(ok){
                                    q.pop();
                                    q.push({p.first, p.second});
                        }
                        else{
                                    if(p.second==k){
                                               cout << res+1 << endl;
                                               goto hell;
                                    }
                                    res++;
                                    q.pop();
                                    mp[p.first]--;
                        }
              }
    }
    return 0;
}
