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
ll n, m;
vector<pll> adj[MAXN];
vector<ll> w[MAXN],ans = {n};
set<int>vet;
ll dist[MAXN],par[MAXN];
bool mark[MAXN];

void readInput(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int v , u , w;
        cin >> v >> u >> w;
        adj[v].push_back({u , w});
        adj[u].push_back({v , w});
        vet.insert(v);
        vet.insert(u);
    }
}

void dijkstra(ll s){
	fill(dist,dist+MAXN,INF);
    dist[s]=0;
    set<pll> q;
    for(auto &i : vet)
    {
        q.insert({dist[i] , i});
    }
	while(!q.empty())
	{
		ll v = q.begin()->second;
		q.erase(q.begin());
        mark[v]=1;
		for(pll i : adj[v]){
			ll u = i.first;
            ll w = i.second;
            if(!mark[u] && dist[v] + w < dist[u])
            {
                q.erase({dist[u] , u});
                par[u] = v;
                dist[u] = dist[v] + w;
                q.insert({dist[u] , u});
            }
		}
	}
}

void writeOutput(){
    vector<ll>ans = {n};
    while(n != 1)
    {
        n = par[n];
        ans.push_back(n);
    }
    for(int i = ans.size() - 1 ; i >= 0 ; i--)    cout << ans[i] << " ";

}

int main(){
	readInput();
	dijkstra(1);
    if(!mark[n] || dist[n]==INF)
    {
        cout << -1 << endl;
        return 0;
    }
	writeOutput();
	return 0;
}
