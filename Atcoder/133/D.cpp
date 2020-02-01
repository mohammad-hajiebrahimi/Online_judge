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
ll n,a[MAXN],ans[MAXN],sum;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i+=2)sum+=a[i];
    for(ll i=1;i<n;i+=2)sum-=a[i];
    ans[0]=sum;
    ans[n-1]=(a[n-1]-sum/2)*2;
    for(ll i=n-2;i>0;i--){
        ans[i]=(a[i]-ans[i+1]/2)*2;
    }
    for(ll i=0;i<n;i++)cout<<ans[i]<<sep;
    return 0;
}
