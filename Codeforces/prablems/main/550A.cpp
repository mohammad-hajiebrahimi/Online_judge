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
string s;

int main()
{

	cin>>s;
	size_t  a=s.find("AB");
	size_t  b=s.find("BA",a+2);
    if(a!=string::npos && b!=string::npos)
	{
		cout<<"YES";
		return 0;
	}
	size_t c=s.find("BA");
	size_t d=s.find("AB",c+2);

	if(c!=string::npos && d!=string::npos)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
