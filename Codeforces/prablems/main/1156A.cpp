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
ll n,a[110],ans;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++){
        if((a[i]==2 && a[i+1]==3)||(a[i]==3 && a[i+1]==2))return cout<<"Infinite"<<endl,0;
        if((a[i]==1 && a[i+1]==2)||(a[i]==2 && a[i+1]==1))ans+=3;
        if((a[i]==3 && a[i+1]==1)||(a[i]==1 && a[i+1]==3))ans+=4;
    }
    for(ll i=0;i<n-2;i++){
        if(a[i]==3 && a[i+1]==1 && a[i+2]==2)ans--;
    }
    cout<<"Finite"<<endl<<ans<<endl;
    return 0;
}
