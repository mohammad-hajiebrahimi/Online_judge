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

vector<ll>adj[MAXN];
ll u,v,t,n,e,mark[MAXN],ans;
void dfs(ll u){
    mark[u]=1;
    for(auto v : adj[u]){
        if (!mark[v]){
            dfs(v);
        }
    }
}
int main()
{
    fast_io;
    cin>>t;
    for(ll i=0;i<t;t++){
        
        cin>>n>>e;
        for(ll j=0;j<e;j++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(ll j=0;j<n;j++){
            if(!mark[j])
            {
                dfs(j);
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
