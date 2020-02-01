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
ll dp[110][MAXN],n,w,ans=-1;
pll a[MAXN];
int main()
{
    fast_io;
    cin>>n>>w;
    for(ll i=1;i<=n;i++){
        cin>>a[i].X>>a[i].Y;
    }
    dp[0][0]=0;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=MAXN;j++){
            dp[i][j]=dp[i-1][j];
            if(a[i].Y<=j){
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-a[i].Y]+a[i].x);
            }
        }
    }
    for(ll i=MAXN-1;i>=1;i--)ans=max(ans,dp[n][i]);
    cout<<ans<<endl;
    return 0;
}
