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
ll n,mark[1010],u,v;
vector<ll>adj[1010];
ll dfs(ll v){
    mark[v]=1;
    for(auto u:adj[v]){
        if(!mark[u])return dfs(u);
        else return u;
    }
    return v;
}
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>v;
        adj[i].push_back(v);
    }
    for(ll i=1;i<=n;i++){
        fill(mark,mark+1010,0);
        ll ans=dfs(i);
        cout<<ans<<sep;
    }
    return 0;
}
