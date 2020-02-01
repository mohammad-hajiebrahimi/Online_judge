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
ll get(ll x){
    ll ans=1;
    while(x%2==0){
        x/=2;
        ans*=2;
    }
    return ans;
}
ll sum,lim;
int main()
{
    fast_io;
    cin>>sum>>lim;
    vector<ll>ans;
    for(ll i=lim;i>=1;i--){
        ll g=get(i);
        if(sum-g>=0){
            sum-=g;
            ans.push_back(i);
        }
    }
    if(sum!=0)kill(-1);
    cout<<SZ(ans)<<endl;
    for(auto i:ans)cout<<i<<sep;
    return 0;
}
