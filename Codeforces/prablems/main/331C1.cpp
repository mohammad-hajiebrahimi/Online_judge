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
ll n,ans;
ll f(ll x){
    ll mx=0;
    while(x!=0){
        mx=max(mx,x%10);
        x/=10;
    }
    return mx;
}
int main()
{
    fast_io;
    cin>>n;
    while(n>9){
        ll w=f(n);
        n-=w;
        ans++;
    }
    if(n!=0)ans++;
    cout<<ans<<endl;
    return 0;
}
