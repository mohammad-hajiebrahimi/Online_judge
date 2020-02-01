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
ll dp[MAXN][3],a[MAXN][3],n;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            for(ll k=0;k<3;k++){
                if(k!=j){
                    dp[i][j]=max(dp[i][j],dp[i-1][k]+a[i][j]);
                }
            }
        }
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;
    return 0;
}
