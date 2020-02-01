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
ll n,m,d,ans,q;
vector<ll>vec;
int main()
{
    fast_io;
    cin>>n>>m>>d;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>q;
            vec.push_back(q);
        }
    }
    n*=m;
    for(ll i=1;i<n;i++){
        if(vec[i]%d != vec[0]%d)return cout<<-1<<endl,0;
    }
    sort(all(vec));
    for(auto v : vec){
        ans+=abs(vec[n/2]-v)/d;
    }
    cout<<ans<<endl;
    return 0;
}
