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
ll color[MAXN],n,u,v,ans=0;
vector<ll>adj[MAXN];
void dfs(ll v,ll par){
    ll now=0;
    for(auto u:adj[v]){
        if(u!=par){
            if(now==color[v]|| now==color[par])now++;
            if(now==color[v]|| now==color[par])now++;
            color[u]=now++;
            dfs(u,v);
        }
    }
}
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){
        ans=max(ans,ll(adj[i].size()));
    }
    cout<<ans+1<<endl;
    dfs(1,1);
    for(ll i=1;i<=n;i++){
        cout<<color[i]+1<<sep;
    }
    return 0;
}
