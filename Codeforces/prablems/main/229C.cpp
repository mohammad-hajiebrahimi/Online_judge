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
ll dist[MAXN],n,m;
vector<pll>adj[MAXN];
set<ll>other[MAXN];
void dijkstra(ll s){
	fill(dist,dist+MAXN,INF);
    dist[s]=0;
    set<pll> q;
    for(ll i=2;i<=n;i++)
    {
        q.insert({dist[i] , i});
    }
    q.insert({0,s});

	while(!q.empty())
	{
		ll v = q.begin()->Y;
        ll d = q.begin()->X;
		q.erase(q.begin());
        while(true){
            if(other[v].count(d)>0)d++;
            else break;
        }
        if(d==INF)return;
		for(pll i : adj[v]){
			ll u = i.first;
            ll w = i.second;
            if( d + w < dist[u])
            {
                q.erase({dist[u] , u});
                dist[u] =d + w;
                q.insert({dist[u] , u});
            }
		}
	}
}
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(ll i=1;i<=n;i++){
        ll k;
        cin>>k;
        for(ll j=0;j<k;j++){
            ll q;
            cin>>q;
            other[i].insert(q);
        }
    }
    dijkstra(1);
    if(dist[n]==INF){
        cout<<-1;
        return 0;
    }
    cout<<dist[n]<<endl;
    return 0;
}
