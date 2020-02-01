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
ll n,f=1;
vector<ll>ans;
int main()
{
    fast_io;
    cin >> n;
    if(n==0)kill(10);
    if(n==1)kill(1);
    while(f && n!=1){
        f=0;
        for(ll i=9;i>1;i--){
            if(n%i==0){
                ans.push_back(i);
                f=1;
                n/=i;
                break;
            }
        }
    }
    if(!f)kill(-1);
    for(ll i=SZ(ans)-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}
