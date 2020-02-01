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
ll n,cnt[MAXN],v[MAXN],u[MAXN],ans,col[MAXN],ans1;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=1;i<n;i++){
        cin>>v[i]>>u[i];
    }
    for(ll i=1;i<=n;i++){
        cin>>col[i];
    }
    for(ll i=1;i<n;i++){
        if(col[v[i]]==col[u[i]])continue;
        if(cnt[v[i]]==ans1)ans=v[i];
        else if(cnt[u[i]]==ans1)ans=u[i];
        else return cout<<"NO"<<endl,0;
        cnt[u[i]]++;
        cnt[v[i]]++;
        ans1++;
    }
    if(ans==0)return cout<<"YES"<<endl<<1<<endl,0;
    cout<<"YES"<<endl<<ans<<endl;
    return 0;
}
