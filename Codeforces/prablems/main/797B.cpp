#include <bits/stdc++.h>
using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<ll,ll>                 pll;
typedef pair<ld,ld>                 pld;


#define all(x)          x.begin(),x.end()
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
vector<ll> e,o;
ll ans , n,x;
int main() {
	fast_io;
	cin >> n;
	for(ll i=0;i<n;i++) {
	    cin >> x;
	    if (x % 2 == 0) e.push_back(x);
	    else o.push_back(x);
	}
	for (int i: e){
        if (i>0) ans += i;
    }
	sort(all(o),greater<ll>());
	ans += o[0];
	for(ll i=1;i<o.size();i++) {
	    if (2*i<o.size() && o[2*i]+o[2*i-1]>0) ans += o[2*i]+o[2*i-1];
	}
	cout <<ans<<endl;
}
