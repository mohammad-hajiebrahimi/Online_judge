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
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e5+10,
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
ll lucky(ll x){
    while(x){
        if(x%10 != 4 && x%10 !=7)return 1;
        x/=10;
    }

    return 0;
}
DSU<MAXN> dsu;
ll n,u,v,w,ans;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<n;i++){
        cin>>u>>v>>w;
        if (lucky(w)){
            dsu.Union(u,v);
        }
    }
    for(ll i=1;i<=n;i++){
        if(dsu.Find(i)==i){
            ll w=dsu.sz[i];
            ans+=w*(n-w)*(n-w-1);
        }
    }
    cout<<ans;
    return 0;
}
