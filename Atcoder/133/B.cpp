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
ll x[11][10],n,d,ans;
int main()
{
    fast_io;
    cin>>n>>d;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<d;j++){
            cin>>x[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll t=0;
            for(ll k=0;k<d;k++){
                t+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
            }
            for(ll k=1;k<=t;k++){
                if(k*k==t){
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
