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
ll h,w,n,l=1,cost=0;
string s;
int main()
{
    fast_io;
    cin >> h >> w >> n;
    for(ll i=0;i<n;i++){
        cin >> s;
        if(cost+SZ(s)+1<=w+1)cost+=SZ(s)+1;
        else {
            cost=SZ(s)+1;
            l++;
        }
    }
    cout<< (l+h-1)/h;
    return 0;
}
