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
         MAXN= 1e6+10,
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

DSU<MAXN> dsu;
ll n,m,a,b,ans=0;
set<pll>E;
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        cin>>a>>b;
        dsu.Union(a,b);
        E.insert({a,b});
        E.insert({b,a});
    }
    for(ll i=1;i<=n;i++){
        if(dsu.Find(i)==i)ans+=dsu.sz[i]*(dsu.sz[i]-1)/2;
    }
    if(ans!=m) return cout<<"No"<<endl,0;
    cout<<"Yes"<<endl;
    return 0;
}
