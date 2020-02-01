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
ll n,m,k,t,x,y;
pll a[MAXN];
int main()
{
    fast_io;
    cin>>n>>m>>k>>t;
    for(ll i=0;i<k;i++){
        cin>>a[i].X>>a[i].Y;
    }
    while(t--){
        cin>>x>>y;
        ll w=0,f=0;
        for(ll i=0;i<k;i++){
            if(a[i].X<x)w++;
            if(a[i].X==x && a[i].Y<y)w++;
            if(a[i].X==x && a[i].Y==y)f=1;
        }
        if(f)cout<<"Waste"<<endl;
        else{
            ll ans=(x-1)*m+y-w;
            if(ans%3==1)cout<<"Carrots"<<endl;
            if(ans%3==2)cout<<"Kiwis"<<endl;
            if(ans%3==0)cout<<"Grapes"<<endl;
        }
    }
    return 0;
}
