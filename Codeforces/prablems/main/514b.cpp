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
ll n,x,y,dead[1100],ans;
pll stormtroopers[1100];
int main()
{
    fast_io;
    cin>>n>>x>>y;
    for(ll i=0;i<n;i++){
        cin>>stormtroopers[i].X>>stormtroopers[i].Y;
    }

    for(ll i=0;i<n;i++){
        if (!dead[i])ans++;
        for(ll j=0;j<n;j++){
            if(!dead[j] && (stormtroopers[i].Y-y)*(stormtroopers[j].X-x)==(stormtroopers[j].Y-y)*(stormtroopers[i].X-x)){
                dead[j]=1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
