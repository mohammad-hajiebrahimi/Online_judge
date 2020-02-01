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
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e5+10,
         INF=1e18;
ll n,k,sum[MAXN],ans,a,j=0;
int main()
{
    fast_io;
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>a;
        sum[i]=sum[i-1]+a;
        while (j<i && sum[i]-sum[j]>=k)j++;
        ans+=j;
    }
    cout<<ans<<endl;
    return 0;
}
