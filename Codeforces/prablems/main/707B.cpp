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
         MAXN= 1e5+10,
         INF=1e18;
ll n,m,k,mark[MAXN],s[MAXN];
vector<pll>adj[MAXN];
vector<ll>ans;
void dfs(){
    for(ll i=0;i<k;i++){
        for(auto u:adj[s[i]]){
            if(!mark[u.X])ans.push_back(u.Y);
        }
    }
}
int main()
{
    fast_io;
    cin>>n>>m>>k;
    for(ll i=0;i<m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u-1].push_back({v-1,w});
        adj[v-1].push_back({u-1,w});
    }
    for(ll i=0;i<k;i++){
        cin>>s[i];
        s[i]--;
        mark[s[i]]=1;
    }
    dfs();
    if(ans.size()==0)return cout<<-1<<endl,0;
    sort(all(ans));
    cout<<ans[0]<<endl;
    return 0;
}
