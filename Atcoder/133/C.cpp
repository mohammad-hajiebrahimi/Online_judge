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
ll l,r,ans=INF;
int main()
{
    fast_io;
    cin>>l>>r;
    if((l<=2019 && r>=2019) || (r-l+1>=2019))return cout<<0<<endl,0;
    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            ans=min(ans,i*j%2019);
        }
    }
    cout<<ans<<endl;
    return 0;
}
