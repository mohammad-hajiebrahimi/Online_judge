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
ll dp[3100][3],ans=INF,n,s[3100],c[3100];
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0 ; i<n ; i++){
        cin>> s[i];
    }
    for(ll i=0 ; i<n ; i++){
        cin>> c[i];
    }
    for(ll i=0 ;i<n ;i++){
        for(ll j=0 ;j<3 ;j++){
            dp[i][j]=INF;
        }
    }
    for(ll i=0; i<n ;i++){
        dp[i][0]=c[i];
        for(ll j=0 ; j<i ; j++){
            if(s[i]>s[j]){
                dp[i][1]=min(dp[i][1],dp[j][0]+c[i]);
                dp[i][2]=min(dp[i][2],dp[j][1]+c[i]);
            }
        }
        ans=min(ans,dp[i][2]);
        //cout<<dp[i][2]<<sep;
    }
    cout<<(ans==INF ? -1:ans)<<endl;
    return 0;
}
