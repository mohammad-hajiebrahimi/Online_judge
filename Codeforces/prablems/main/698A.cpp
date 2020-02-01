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
ll dp[110][3],a[110],n;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n+1;i++){
        dp[i][0]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
        if(a[i]==1 || a[i]==3)dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
        if(a[i]==2 || a[i]==3)dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;

    }
    cout<<n-dp[n+1][0]<<endl;
    return 0;
}
