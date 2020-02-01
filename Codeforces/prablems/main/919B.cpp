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
ll k,ans,sum;
ll cel(ll n){
    sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    fast_io;
    cin>>k;
    while(k){
        ans++;
        if(cel(ans)==10)k--;
    }
    cout<<ans<<endl;
    return 0;
}
