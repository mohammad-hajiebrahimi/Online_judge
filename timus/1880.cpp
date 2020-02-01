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
ll a,b,c,aa[MAXN],bb[MAXN],cc[MAXN],k,j,ans;
int main()
{
    fast_io;
    cin >> a;
    for(ll i=0;i<a;i++)cin >> aa[i];
    cin >> b;
    for(ll i=0;i<b;i++)cin >> bb[i];
    cin >> c;
    for(ll i=0;i<c;i++)cin >> cc[i];
    for(ll i=0;i<a;i++){
        while(j<b && bb[j]<aa[i])j++;
        while(k<c && cc[k]<aa[i])k++;
        if(aa[i]==bb[j] && aa[i]==cc[k])ans++;
    }
    cout<<ans;
    return 0;
}
