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
ll n,m,dp[MAXN],ans,mark[MAXN];
vector<ll>adj[MAXN];
ll dfs(ll u){
    mark[u]=1;
    for(auto v:adj[u]){
        if(!mark[v]){
            dfs(v);
        }
        dp[u]=max(dp[u],dp[v]+1);
    }
}
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(ll i=1;i<=n;i++){
        if(!mark[i]){
            dfs(i);
        }
    }
    for(ll i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}
