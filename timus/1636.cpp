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
ll t1,t2,t;
int main()
{
    fast_io;
    cin >> t1 >> t2;
    for(ll i=0;i<10;i++){
        cin >> t;
        t2-=20*t;
    }
    if(t2>=t1)cout<<"No chance.";
    else cout<<"Dirty debug :(";
    return 0;
}
