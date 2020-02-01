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
         MAXN= 1e5+10,
         INF=1e18;
template <ll SIZE>
struct DSU
{
    unordered_map<ll,ll>par[SIZE];
    unordered_map<ll,ll>sz[SIZE];


    ll Find(ll v,ll c)
    {
        return (par[v][c] <=0  ? v : par[v][c] = Find(par[v][c],c));
    }

    ll Union(ll v , ll u,ll c)
    {
        ll pv = Find(v,c) , pu = Find(u,c);
        if(pv == pu)    return 0;
        if(par[pu][c]>par[pv][c])swap(pu,pv);
        par[pv][c] += par[pu][c];
        par[pu][c]=pv;
        sz[pv][c]+=sz[pu][c];
        return 1;
    }
};

DSU<MAXN>dsu;
unordered_map<ll,ll>mp[MAXN];
ll n,m,q,u,v,ans;

int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        dsu.Union(a,b,c--);
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        if ( dsu.par[u].size() > dsu.par[v].size() ) swap ( u , v ) ;
        if (dsu.sz[u].size() > dsu.sz[v].size())swap(u,v);
        if(mp[v].find(u)!=mp[v].end()) mp[u][v]=mp[v][u];
        if(mp[u].find(v)==mp[u].end()){
            ll ans=mp[u][v];
            for(auto t : dsu.par[u]){
                if(dsu.par[v].find(t.X)!=dsu.par[v].end()){
                    if(dsu.Find(u,t.X)==dsu.Find(v,t.X))ans++;
                }
            }
            mp[u][v]=ans;

        }
        cout<<mp[u][v]<<endl;
    }
    return 0;
}
