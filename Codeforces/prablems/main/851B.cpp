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
ll xa,xb,xc,ya,yb,yc;
int main()
{
    fast_io;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    ll d1=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    ll d2=(xc-xb)*(xc-xb)+(yc-yb)*(yc-yb);
    if(d1==d2 && ((xb-xa)!=(xc-xb)||(yb-ya)!=(yc-yb)))cout<<"YES";
    else cout<<"NO";
    return 0;
}
