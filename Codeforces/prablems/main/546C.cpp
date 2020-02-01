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
         MAXN= 1e5+10,
         INF=1e18;
queue<ll>q,q1;
ll n,w,k1,k2,ans=-1;
int main()
{
    fast_io;
    cin>>n>>k1;
    for(ll i=0;i<k1;i++){
        cin>>w;
        q.push(w);
    }
    cin>>k2;
    for(ll i=0;i<k2;i++){
        cin>>w;
        q1.push(w);
    }
    while(true){
        ans++;
        if(q.size()==0)return cout<<ans<<sep<<2,0;
        if(q1.size()==0)return cout<<ans<<sep<<1,0;
        ll x=q.front();
        ll y=q1.front();
        q.pop();
        q1.pop();
        if(x>y){
            q.push(y);
            q.push(x);
        }
        else{
            q1.push(x);
            q1.push(y);
        }
        if(ans>MAXN)return cout<<-1<<endl,0;
    }
    return 0;
}
