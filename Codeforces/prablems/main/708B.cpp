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
ll a00,a01,a10,a11;
int main()
{
    fast_io;
    cin >> a00 >> a01 >> a10 >> a11;
    ll cnt0=ll(sqrt(a00*2));
    ll cnt1=ll(sqrt(a11*2));
    if(cnt0==0 && cnt1==0 && a10==0 && a01==0){
        cout<<1;
        return 0;
    }
    if(cnt1==0 && a10==0 && a01==0)cnt1=-1;
    if(cnt0==0 && a10==0 && a01==0)cnt0=-1;
    cnt1++;
    cnt0++;
    if(cnt1*(cnt1-1)!=a11*2 || cnt0*(cnt0-1)!=a00*2 )return cout<<"Impossible"<<endl ,0;
    if(cnt1*cnt0!=a01+a10)return cout<<"Impossible"<<endl ,0;
    if(cnt0==0){
        for(ll i=0;i<cnt1;i++){
            cout<<1;
        }
        return 0;
    }
    if(cnt1==0){
        for(ll i=0;i<cnt0;i++){
            cout<<0;
        }
        return 0;
    }
    ll y=ll(a10/cnt0);
    ll z=a10%cnt0;
    for(ll i=0;i<y;i++)cout<<1;
    for(ll i=0;i<cnt0-z;i++)cout<<0;
    if(y<cnt1)cout<<1;
    for(ll i=0;i<z;i++)cout<<0;
    for(ll i=0;i<cnt1-y-1;i++)cout<<1;
    return 0;
}
