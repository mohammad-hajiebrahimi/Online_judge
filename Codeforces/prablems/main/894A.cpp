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
ll ans;
string s;
int main()
{
	cin>>s;
	for(ll i=0;i<s.size();i++)
		for(ll j=i;j<s.size();j++)
			for(ll k=j;k<s.size();k++)
				if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q') ans++;
	cout<<ans<<endl;;
}
