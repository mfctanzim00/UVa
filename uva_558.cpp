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

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

struct Info
{
    ll u, v, cost;
};
vector<Info>graph;

ll parent[3000], dis[3000], edges, nodes;
bool Neg_cycle;

void Bellman_Ford(ll src)
{
    for(ll i=0; i<nodes; i++)
    {
        dis[i]=1e18;
    }
    dis[src]=0;
    for(ll j=0; j<nodes-1; j++)
    {
        for(ll i=0; i<graph.size(); i++)
        {
            if(dis[graph[i].u]+graph[i].cost<dis[graph[i].v])
            {
                dis[graph[i].v] = dis[graph[i].u]+graph[i].cost;
            }
        }
    }
    for(ll i=0; i<graph.size(); i++)
    {
        if(dis[graph[i].u]+graph[i].cost<dis[graph[i].v])
        {
            Neg_cycle = true;
            break;
        }
    }
    if(!Neg_cycle)
        printf("not possible\n");
    else
    {
        printf("possible\n");
    }

}

int main()
{
    //FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif // Mfc_Tanzim

    ll t, u, v, w;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &nodes, &edges);

        for(ll i=0; i<edges; i++)
        {
            scanf("%lld %lld %lld", &u, &v, &w);
            Info edge;
            edge.u = u;
            edge.v = v;
            edge.cost = w;
            graph.pb(edge);
        }

        Bellman_Ford(0);

        graph.clear();
        Neg_cycle = false;
    }
    return 0;
}
