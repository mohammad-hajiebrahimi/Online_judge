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
         MAXN= 1e6+10,
         INF=1e18;
ll n,ans;
int main()
{
    fast_io;
    cin>>n;
    ans+=n/5;
    n%=5;
    ans+=n/4;
    n%=4;
    ans+=n/3;
    n%=3;
    ans+=n/2;
    n%=2;
    ans+=n/1;
    n%=1;
    cout<<ans<<endl;
    return 0;
}
