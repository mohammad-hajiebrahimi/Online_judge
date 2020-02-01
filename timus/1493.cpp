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
ll pw(ll a, ll b, ll md) {
    if (!b)
        return 1;
    if (b & 1)
        return a * pw(a * a % md, b / 2, md) % md;
    return pw(a * a % md, b / 2, md) % md;
}
ll test(ll n){
    ll s1=0,s2=0;
    for(ll i=0;i<3;i++){
        s1+=n%10;
        n/=10;
    }
    for(ll i=0;i<3;i++){
        s2+=n%10;
        n/=10;
    }
    return s1==s2;
}
int main()
{
    fast_io;
    ll n=0;
    cin >> n;
    if(test(n-1)||test(n+1))kill("Yes")
    kill("No")
    return 0;
}
