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
ll dp[110][MAXN],n,w;
pll a[MAXN];
int main()
{
    fast_io;
    cin>>n>>w;
    for(ll i=1;i<=n;i++){
        cin>>a[i].X>>a[i].Y;
    }
    fill(dp[0]+1,dp[0]+MAXN,INF);
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<MAXN;j++){
            if(j>=a[i].Y){
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-a[i].Y]+a[i].X);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(ll i=MAXN-1;i>=0;i--){
        if(dp[n][i]<=w) return cout<<i<<endl,0;
    }
    return 0;
}
