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
ll n,a[MAXN],b[MAXN],mark[MAXN],ans=-1;
void dfs(ll v){
    mark[v]=1;
    for(ll i=1;i<=n;i++){
        if(a[i]==a[v] || b[i]==b[v]){
            if(!mark[i]){
                dfs(i);
            }
        }
    }
}
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i]>>b[i];
    for(ll i=1;i<=n;i++){
        if(!mark[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<endl;
    return 0;
}
