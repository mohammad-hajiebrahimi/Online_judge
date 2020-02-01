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
string s, t;
bool E(int a, int b, int sz){
	if(sz % 2){
		for(int i = 0; i < sz; i++){
			if(s[a + i] != t[b + i]){
				return 0;
			}
		}
		return 1;
	}
	if(E(a, b, sz / 2) && E(a + sz / 2, b + sz / 2, sz / 2)){
		return 1;
	}
	if(E(a, b + sz / 2, sz / 2) && E(a + sz / 2, b, sz / 2)){
		return 1;
	}
	return 0;
}
int main(){
	fast_io;
	cin >> s >> t;
	if(s.size() == t.size() && E(0, 0, s.size())){
		cout << "Yes"<<endl;
	}
	else{
		cout << "No"<<endl;
	}
	return 0;
}
