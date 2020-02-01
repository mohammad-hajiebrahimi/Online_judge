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
ll n,m,k,a[MAXN],sum,r=0,mx=0;
DSU<MAXN> dsu;
int main()
{
    fast_io;
    cin>>n>>m>>k;
    for(ll i=0;i<k;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        dsu.Union(u,v);
    }
    sum=n;
    for(ll i=0;i<k;i++){
        ll sz=dsu.sz[dsu.Find(a[i])];
        //cout<<sz;
        r+=sz*(sz-1)/2;
        sum-=sz;
        mx=max(mx,sz);
    }
    //cout<<sum<<sep<<mx<<sep<<r;
    ll no=sum*(sum-1)/2,yes=mx*sum;
    cout<<no+yes+r-m<<endl ;
    return 0;
}
