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
ll m,n,u,v,mark[MAXN],cnt[MAXN],ans;
vector<ll>adj[MAXN];
ll DFS(ll v,ll d ){
    ll Barg = 1;
    if(!cnt[v])d=0;
    else d++;
    if(d>m) return 0;
    mark[v]=1;
    for(auto u:adj[v]){
        if(!mark[u]){
            Barg=0;
            DFS(u,d);

        }
    }
    if(Barg)ans++;
}
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=1;i<=n;i++) cin>>cnt[i];
    for(ll i=1;i<n;i++) {
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    DFS(1,0);
    cout<<ans<<endl;
    return 0;
}
