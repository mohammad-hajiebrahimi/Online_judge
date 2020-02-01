#include <bits/stdc++.h>
using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<ll,ll>                 pll;
typedef pair<ld,ld>                 pld;


#define all(x)          (x).begin(),(x).end()
#define Sort(x)         sort(all(x))
#define sep             ' '

#define endl            '\n'
#define tab             '\t'
#define X               first
#define Y               second
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e3+10,
         INF=1e18;
template <ll SIZE>
struct DSU
{
    ll par[SIZE] , sz[SIZE];
    DSU()
    {
        fill(par , par + SIZE , -1);
        fill(sz , sz + SIZE , 1);
    }

    ll Find(ll v)
    {
        return (par[v] == -1 ? v : par[v] = Find(par[v]));
    }

    ll Union(ll v , ll u)
    {
        ll pv = Find(v) , pu = Find(u);
        if(pv == pu)    return 0;
        par[pu] = pv;
        sz[pv] += sz[pu];
        return 1;
    }
};

DSU<MAXN> dsu[MAXN];
ll n,m,q,u,v,ans;

int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        dsu[c].Union(a,b);
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        ans=0;
        for(ll i=1;i<=m;i++){
            //cout<<dsu[i].Find(u)<<sep<<dsu[i].Find(v)<<endl;
            //if((dsu[i].par[u]==-1 &&dsu[i].par[v]==u) ||(dsu[i].par[v]==-1 &&dsu[i].par[u]==v))ans++;
            //if(dsu[i].par[u]==dsu[i].par[v] && dsu[i].par[u]!=-1 && dsu[i].par[v]!=-1)ans++;
            if(dsu[i].Find(u)==dsu[i].Find(v))ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
}
