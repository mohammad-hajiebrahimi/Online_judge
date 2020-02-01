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
ll n,m,mark[MAXN],color[MAXN],flag=0;
vector<ll>a,b,adj[MAXN];
void dfs(ll v,ll c){
    mark[v]=1;
    color[v]=c;
    for(auto u :adj[v]){
        if(color[u]==c)flag=1;
        if(!mark[u])dfs(u,-c);
    }
}

int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){
        if(!mark[i])dfs(i,1);
        if(flag)return cout<<-1<<endl,0;
        if (color[i]==1)a.push_back(i);
        if (color[i]==-1)b.push_back(i);
    }
    cout<<a.size()<<endl;
    for(ll i=0;i<a.size();i++)cout<<a[i]<<sep;
    cout<<endl<<b.size()<<endl;
    for(ll i=0;i<b.size();i++)cout<<b[i]<<sep;
    return 0;
}
