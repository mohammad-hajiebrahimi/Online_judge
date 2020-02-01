#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;


#define all(x)                      (x).begin(),(x).end()
#define Sort(x)                     sort(all((x)))
#define X                           first
#define Y                           second
#define sep                         ' '
#define endl                        '\n'
#define fast_io                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define set_random                  mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());


const ll MAXN = 1e6 + 10,
         INF = 8e18,
         MOD = 1e9 + 7;


struct DSU
{
    ll par[MAXN] , sz[MAXN];
    DSU()
    {
        fill(par , par + MAXN , -1);
        fill(sz , sz + MAXN , 1);
    }

    ll Find(ll v)
    {
        if(par[v]==-1) return v;
        par[v]=Find(par[v]);
        return par[v];
    }

    ll Union(ll v , ll u)
    {
        ll pv = Find(v) , pu = Find(u);
        if(pv == pu)    return 1;
        par[pu] = pv;
        sz[pv] += sz[pu];
        return 0;
    }
};

DSU DSU;
vector<pll>ezafi;
ll n,u,v,size_ezafi;
int main() {
    fast_io;
    cin>>n;
    for(ll i=1;i<n;i++){
        cin>>u>>v;
        if(DSU.Union(u,v)){
            ezafi.push_back({u,v});
        }
    }
    size_ezafi=ezafi.size();
    cout<<size_ezafi<<endl;
    for(ll i=0;i<size_ezafi;i++){
        for(ll u=1;u<=n;u++){
            if(!DSU.Union(ezafi[i].Y,u)){
                cout<<ezafi[i].X<<sep<<ezafi[i].Y<<sep<<ezafi[i].Y<<sep<<u<<endl;
                break;
            }
        }
    }
    return 0;
}
