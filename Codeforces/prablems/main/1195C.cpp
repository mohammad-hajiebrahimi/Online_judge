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
ll a[MAXN],b[MAXN],n,dp[MAXN][2];
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    dp[0][0]=a[0];
    dp[0][1]=b[0];
    for(ll i=1;i<=n;i++){
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]+a[i]);
        dp[i][1]=max(dp[i-1][1],dp[i-1][0]+b[i]);
    }
    cout<<max(dp[n-1][0],dp[n-1][1]);
    return 0;
}
