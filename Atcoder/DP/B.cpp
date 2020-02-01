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
ll n,k,h[MAXN],dp[MAXN];
int main()
{
    fast_io;
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>h[i];
    }
    dp[1]=0;
    for(ll i=2;i<=n;i++){
        dp[i]=INF;
        for(ll j=1;j<=k && i-j>0;j++){
            dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
