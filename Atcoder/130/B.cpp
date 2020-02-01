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
ll n,x,l[110],d[110],ans;
int main()
{
    fast_io;
    cin>>n>>x;
    for(ll i=1;i<=n;i++){
        cin>>l[i];
    }
    d[1]=0;
    for(ll i=2;i<=n+1;i++){
        d[i]=d[i-1]+l[i-1];
        if(d[i]<=x)ans++;
    }
    cout<<ans+1<<endl;
    return 0;
}
