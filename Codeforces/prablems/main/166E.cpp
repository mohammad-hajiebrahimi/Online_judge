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
         MAXN= 1e7+10,
         INF=1e18;
ll dp[MAXN],n;
int main()
{
    fast_io;
    cin>>n;
    dp[1]=0;
    dp[2]=3;
    for(ll i=3;i<=n;i++){
        dp[i]=dp[i-2]*3+dp[i-1]*2;
        dp[i]%=MOD;
    }
    cout<<dp[n]<<endl;
    return 0;
}
