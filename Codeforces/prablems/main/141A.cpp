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
string s,s1,s2;
ll num[26];
int main()
{
    fast_io;
    cin >> s >> s1 >> s2;
    for(ll i=0;i<SZ(s);i++)num[s[i]-'A']++;
    for(ll i=0;i<SZ(s1);i++)num[s1[i]-'A']++;
    for(ll i=0;i<SZ(s2);i++)num[s2[i]-'A']--;
    for(ll i=0;i<26;i++){
        if(num[i])kill("NO");
    }
    kill("YES");
    return 0;
}
