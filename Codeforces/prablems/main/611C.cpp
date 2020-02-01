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
ll w,h,dp1[510][510],dp2[510][510],q;
string s[510];
int main()
{
    fast_io;
    cin>>h>>w;
    for(ll i=0;i<w;i++)s[0]+='#';
    for(ll i=1;i<=h;i++)cin>>s[i];
    for(ll i=1;i<=h;i++)s[i]='#'+s[i];
    for(ll i=1;i<=h;i++){
        for(ll j=1;j<=w;j++){
            dp1[i][j]=dp1[i-1][j] +(s[i][j]=='.' && s[i-1][j]=='.');
            dp2[i][j]=dp2[i][j-1] +(s[i][j]=='.' && s[i][j-1]=='.');
        }
    }
    cin>>q;
    while(q--){
        ll x1,x2,y1,y2,ans=0;
        cin>>x1>>y1>>x2>>y2;
        for(ll i=x1;i<=x2;i++)ans+=dp2[i][y2]-dp2[i][y1];
        for(ll i=y1;i<=y2;i++)ans+=dp1[x2][i]-dp1[x1][i];
        cout<<ans<<endl;
    }

    return 0;
}
