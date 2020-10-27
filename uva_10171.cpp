#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
#define  ll        long long
#define  ull       unsigned long long
#define  pb        push_back
#define  ff        first
#define  ss        second
#define  all(v)    (v.begin(), v.end())
#define  pi        acos(-1.0)
#define  FastRead  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define  bug(a)    cerr << #a << " : " << a << endl
using namespace std;
const ll mx = 2e5+10;
const ll maxx = 1e17;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
vector<pair<ll, ll> >old_graph[30], young_graph[30];
ll dis[mx], dis2[mx];
priority_queue<pair<ll, ll> >pq;

void Dijkstra_for_young(ll u)
{
    pq.push({0, u});
    dis[u] = 0;
    while(!pq.empty())
    {
        ll x = pq.top().second;
        ll y = pq.top().first*-1;
        pq.pop();
        if(y>dis[x])
            continue;
        for(auto i: young_graph[x])
        {
            ll cost = i.second;
            ll current_node = i.first;
            if(cost+dis[x]<dis[current_node])
            {
                dis[current_node] = cost+dis[x];
                pq.push({-1*dis[current_node], current_node});
            }
        }
    }
}

void Dijkstra_for_old(ll u)
{
    pq.push({0, u});
    dis2[u] = 0;
    while(!pq.empty())
    {
        ll x = pq.top().second;
        ll y = pq.top().first*-1;
        pq.pop();
        if(y>dis2[x])
            continue;
        for(auto i: old_graph[x])
        {
            ll cost = i.second;
            ll current_node = i.first;
            if(cost+dis2[x]<dis2[current_node])
            {
                dis2[current_node] = cost+dis2[x];
                pq.push({-1*dis2[current_node], current_node});
            }
        }
    }
}

void init()
{
    for(ll i=1; i<=26; i++)
    {
        old_graph[i].clear();
        young_graph[i].clear();
        dis[i] = maxx;
        dis2[i] = maxx;
    }
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif // Mfc_Tanzim

    ll n, m, u, v, w, src, tar;
    //cin >> t;

    while(1)
    {
        cin >> n;
        if(n==0)
        {
            break;
        }
        init();
        vector<char>ret;
        ll ans = maxx;
        char ch, ch2, ch3, ch4, ami, vura_beta;

        for(int i=1; i<=n; i++)
        {
            cin >> ch >> ch2 >> ch3 >> ch4 >> w;
            u = (ch3-'A'+1);
            v = (ch4-'A'+1);
            if(ch=='Y')
            {
                if(ch2=='B')
                {
                    young_graph[u].pb({v, w});
                    young_graph[v].pb({u, w});
                }
                else young_graph[u].pb({v, w});
            }
            else
            {
                if(ch2=='B')
                {
                    old_graph[u].pb({v, w});
                    old_graph[v].pb({u, w});
                }
                else old_graph[u].pb({v, w});
            }
        }
        cin >> ami >> vura_beta;
        u = (ami-'A'+1);
        v = (vura_beta-'A'+1);

        Dijkstra_for_young(u);
        Dijkstra_for_old(v);

        for(ll i=1; i<=26; i++)
        {
            if(dis[i]+dis2[i]<ans)
            {
                ans = dis[i]+dis2[i];
                ret.clear();
                ret.pb(char(i+'A'-1));
            }
            else if(ans==dis[i]+dis2[i]) ret.pb(char(i+'A'-1));
        }
        if(ans==maxx) cout << "You will never meet." << '\n';
        else
        {
            cout << ans << " ";
            sort all(ret);
            for(ll i=0; i<ret.size()-1; i++)
                    cout << ret[i] << " ";
            cout << ret.back() << '\n';
        }
    }
    return 0;
}
