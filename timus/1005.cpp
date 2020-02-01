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
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll n,w[30],sum=INF;
int main()
{
    fast_io;
    cin >> n;
    for(ll i=0;i<n;i++){
        cin >> w[i];
    }
    for(ll i=1;i<1<<n;i++){
        ll ans=0;
        for(ll j=0;j<n;j++){
            if(i & (1<<j))ans+=w[j];
            else ans-=w[j];
        }
        sum=min(sum,abs(ans));
    }
    cout<<sum<<endl;
    return 0;
}
