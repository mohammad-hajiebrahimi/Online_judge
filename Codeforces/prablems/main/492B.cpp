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
         MAXN= 1e4+10,
         INF=1e18;
ll n,l;
ld a[MAXN],ans;
int main()
{
    fast_io;
    cin>>n>>l;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ans=a[0];
    for(ll i=0;i<n-1;i++){
        ans=max(ans,(a[i+1]-a[i])/2);
    }
    ans=max(ans,l-a[n-1]);
    if(ans>ll(ans))cout<<ll(ans)<<".5";
    else cout<<ll(ans);
    return 0;
}
