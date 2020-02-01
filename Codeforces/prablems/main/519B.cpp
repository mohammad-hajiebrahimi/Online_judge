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
         MAXN= 1e5+10,
         INF=1e18;
ll n,a[MAXN],b[MAXN],c[MAXN];
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n-1;i++)cin>>b[i];
    for(ll i=0;i<n-2;i++)cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<a[i]<<endl;
            break;
        }
    }
    for(ll i=0;i<n-1;i++){
        if(b[i]!=c[i]){
            cout<<b[i]<<endl;
            break;
        }
    }
    return 0;
}
