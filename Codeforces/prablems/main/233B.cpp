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
ll n,u=1;
ll sum(ll e){
    ll summ=0;
    while(e!=0){
        summ+=e%10;
        e/=10;
    }
    return summ;
}
int main()
{
    fast_io;
    cin>>n;
    if(sqrt(n)>100)u=ll(sqrt(n))-100;
    for(ll i=u;i<ll(sqrt(n))+1;i++){
        if(n%i==0){
            if(i+sum(i)==n/i)return cout<<i<<endl,0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
