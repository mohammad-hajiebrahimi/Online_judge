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
         MAXN= 1e3+10,
         INF=1e18;
ll adj[MAXN][MAXN],mark[MAXN],n,m,dis[MAXN],ans=0;
void bfs(ll k){
    queue<ll>q;
    q.push(1);
    mark[1]=1;
    while(!q.empty()){
        ll v=q.front();
        q.pop();
        for(ll i=1;i<=n;i++){
            if(adj[i][v]==k && !mark[i]){
                q.push(i);
                mark[i]=1;
                dis[i]=dis[v]+1;
            }
        }
    }
    if(ans==-1 || dis[n]==0){
        ans=-1;
    }
    else ans=max(ans,dis[n]);
}
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    bfs(1);
    for(ll i=1;i<=n;i++){
        mark[i]=0;
        dis[i]=0;
    }
    bfs(0);
    cout<<ans<<endl;
    return 0;
}
