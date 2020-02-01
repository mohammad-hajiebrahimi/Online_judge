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
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
int main(){
	int n;

	scanf("%d",&n);

	if(n < 5) puts("few");
	else if(n < 10) puts("several");
	else if(n < 20) puts("pack");
	else if(n < 50) puts("lots");
	else if(n < 100) puts("horde");
	else if(n < 250) puts("throng");
	else if(n < 500) puts("swarm");
	else if(n < 1000) puts("zounds");
	else puts("legion");

	return 0;
}
