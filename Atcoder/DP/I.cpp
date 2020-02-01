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
         MAXN= 3e3+10,
         INF=1e18;
ll n;
ld p[MAXN],dp[MAXN][MAXN],ans;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>p[i];
    }
    dp[0][0]=1;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=n;j++){
            if(j==0){
                dp[i][0]=dp[i-1][0]*(1-p[i]);
                continue;
            }
            dp[i][j]=dp[i-1][j-1]*p[i]+dp[i-1][j]*(1-p[i]);

        }
    }
    for(ll i=(n+1)/2;i<=n;i++){
        ans+=dp[n][i];
        //cout<<dp[n][i];
    }
    cout<<setprecision(10)<<fixed<<ans<<endl;
    return 0;
}
