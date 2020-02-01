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
ll a,b,k, con=1e9;
ll tedad(ll s){
    ll ans=0;
    while(s>0){
        ans++;
        s/=10;
    }
    return ans;
}
int main()
{
    fast_io;
    cin>>a>>b>>k;
    if(b>=k)return cout<<2<<endl,0;
    for(ll i=1;i<min(a+1,k);i++){
        ll tmp=(i*con)%k;
        if(!tmp)continue;
        if(tmp+b>=k)continue;
        else{
            cout<<1<<sep;
            ll w=tedad(i);
            for(ll i=0;i<9-w;i++){
                cout<<'0';
            }
            return cout<<i<<endl,0;
        }
    }
    cout<<2<<endl;
    return 0;
}
