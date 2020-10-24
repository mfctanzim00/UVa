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
const ll maxn = 1e6+7;

struct edge
{
    int u,v,w;
};

vector<edge>graph;
vector<ll>ret;
ll parent[maxn], cnt=0, mst = 0;

bool compare(edge a, edge b)
{
    return a.w<b.w;
}

int Find(ll r)
{
    if(parent[r]==r)
        return r;
    return parent[r]=Find(parent[r]);
}

void initPar(ll r)
{
    for(ll i=0; i<r; i++)
    {
        parent[i]=i;
    }
}
void kruskals_Algorithm(ll n)
{
    sort(graph.begin(), graph.end(), compare);
    initPar(n);
    for(ll i=0; i<graph.size() ; i++)
    {
        ll uPr=Find(graph[i].u);
        ll vPr=Find(graph[i].v);

        if(uPr!=vPr && cnt!=n-1)
        {
            parent[uPr]=vPr;
            cnt++;
            mst+=graph[i].w;
        }
        else ret.pb(graph[i].w);
    }

}


int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, k, m, a, b, c, d;
    ll n, e;
    while(1)
    {
        cin >> n >> e;
        if(n==0&&e==0)
            break;

        cnt = 0, mst = 0;
        graph.clear();
        ret.clear();

        for(ll i=0 ; i<e ; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;

            edge input;
            input.u=u;
            input.v=v;
            input.w=w;
            graph.pb(input);
        }

        kruskals_Algorithm(n);

        if(ret.size()==0)
        {
            cout << "forest" << endl;
            continue;
        }
        sort all(ret);
        for(ll i=0; i<ret.size()-1; i++)
            cout << ret[i] << " ";
        cout << ret.back() << endl;
    }
    return 0;
}
