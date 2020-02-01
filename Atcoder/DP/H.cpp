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
         MAXN= 1e3+10,
         INF=1e18;
ll dp[MAXN][MAXN],H,W;
char p[MAXN][MAXN];
int main()
{
    fast_io;
    cin>>H>>W;
    for(ll i=1;i<=H;i++){
        for(ll j=1;j<=W;j++){
            cin>>p[i][j];
        }
    }
    dp[1][1]=1;
    for(ll i=1;i<=H;i++){
        for(ll j=1;j<=W;j++){
            if(p[i][j]=='#')continue;
            dp[i][j]+=dp[i-1][j] + dp[i][j-1];
            dp[i][j]%=MOD;
        }
    }
    cout<<dp[H][W]<<endl;
    return 0;
}
