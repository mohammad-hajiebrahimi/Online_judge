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
         MAXN= 2e5+10,
         INF=1e18;
ll p[MAXN] , p2[MAXN] , n , ans[MAXN] ;
bool mark[MAXN];
void input()
{

}
int main ()
{

    cin >> n ;
	for ( int i = 0 ; i < n ; i++ ){
        cin >> p[i] >> p2[i];
        p[i]-- , p2[i]-- ;
    }

	if ( n < 3 ){
		for ( int i = 1 ; i <= n ; i++ )
			cout << i << sep ;
		return 0 ;
	}
	ans[0] = 1 ;
	mark[0] = 1 ;
	int v = 0 ;
	for ( int i = 1 ; i < n ; i++ ){
		if ( (p[p[v]] == p2[v] || p2[p[v]] == p2[v] ) && !mark[p[v]] ){
            ans[i] = p[v]+1;
            v = p[v] ;
        }
		else{
            ans[i] = p2[v]+1;
            v = p2[v];
        }
	}
	for ( int i = 0 ; i < n ; i++ )
		cout << ans[i] << " " ;
    return 0;
}
