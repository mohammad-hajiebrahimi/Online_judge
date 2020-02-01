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
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
tuple<ll,ll,ll>cnt[MAXN];
ll n,m,ans[MAXN],q,p;
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        cin>>q;
        get<0>(cnt[i])= q ;
        get<1>(cnt[i])= -1 ;
        get<2>(cnt[i])= -1 ;
    }
    for(ll i=0;i<m;i++){
        cin>>q;
        get<0>(cnt[n+i])=q;
        get<1>(cnt[n+i])=1;
        get<2>(cnt[n+i])=i;
    }
    sort(cnt,cnt+n+m);
    for(ll i=0;i<n+m;i++){
        if(get<1>(cnt[i])==1){
            ans[get<2>(cnt[i])]=i-p;
            p++;
        }
    }
    for(ll i=0;i<m;i++){
        cout<<ans[i]<<sep;
    }
    return 0;
}
