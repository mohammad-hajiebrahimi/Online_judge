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
         MAXN= 1e9+10,
         INF=1e18;
ll n,p,p1,p2;
ll aval(ll x)
{
    if(x<=1)return 0;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0)return 0;
    }
    return 1;

}
int main()
{
    fast_io;
    cin>>n;
    aval(n);
    if(aval(n))return cout<<1<<endl<<n<<endl,0;
    if(aval(n-2))return cout<<2<<endl<<n-2<<sep<<2<<endl,0;
    if(aval(n-3)) return cout<<2<<endl<<n-3<<sep<<3<<endl,0;
    p=n;
    while(!aval(p))p--;
    p1=n-p;
    while(!aval(p1) || !aval(n-p1-p))p1--;
    cout<<3<<endl<<p<<sep<<p1<<sep<<n-p1-p<<endl;
    return 0;
}
