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
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 3e5+100,
         INF=1e18;
ll temp[MAXN],dp[MAXN],n,m,ans=-INF;
vector<pll>edge[MAXN];
int main()
{
    fast_io;
    cin >> n >> m;
    for(ll i=0;i<m;i++){
        ll u,v,w;
        cin >> u >> v >> w;
        edge[w].push_back({u,v});
    }
    for(ll i=0;i<MAXN;i++){
        for(auto j:edge[i]){
            temp[j.Y]=max(temp[j.Y],dp[j.X]+1);
        }
        for(auto j:edge[i]){
            dp[j.Y]=max(dp[j.Y],temp[j.Y]);
        }
    }
    for(ll i=0;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    cout << ans << endl;
    return 0;
}
