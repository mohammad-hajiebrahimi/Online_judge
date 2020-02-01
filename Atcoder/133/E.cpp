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
ll n,k,ans=1;
vector<ll>adj[MAXN];
void dfs(ll v,ll g,ll num){
    ans = ans*num %MOD;
    //if(num==0)return cout<<0<<endl,0;
    num=k-1;
    if(g!=-1)num--;
    for(auto u: adj[v]){
        if(u==g)continue;
        dfs(u,v,num);
        num--;
    }
}
int main()
{
    fast_io;
    cin>>n>>k;
    for(ll i=1;i<n;i++){
        ll uu,vv;
        cin>>uu>>vv;
        adj[uu].push_back(vv);
        adj[vv].push_back(uu);
    }
    dfs(1,-1,k);
    cout<<ans<<endl;
    return 0;
}
