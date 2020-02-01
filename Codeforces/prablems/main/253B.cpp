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
#define file_io         freopen("input.txt" , "r" , stdin) ; freopen("output.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll n,a[MAXN],ans=0;
int main()
{
    fast_io;
    file_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll pntr=0;
    for(ll i=0;i<n;i++){
        while(a[pntr+1]<=a[i]*2 && pntr+1<n)pntr++;
        ans=max(ans,pntr-i+1);
    }
    cout<<n-ans<<endl;
    return 0;
}
