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
         MAXN= 3e3+10,
         INF=1e18;
ll dp[MAXN][MAXN];
string s,t;
vector<char>ans;
int main()
{
    fast_io;
    cin >> s >> t;
    ll n =s.size();
    ll m=t.size();
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+(s[i-1]==t[j-1])});
            }
    }
    //cout<<dp[n][m];
   ll i = n, j = m;
   while (i&&j) {
       if (s[i-1] == t[j-1]) {
           ans.push_back(s[i-1]);
           i--;
           j--;
           continue;
       }
       if (dp[i-1][j] > dp[i][j-1]) i--;
       else  j--;
   }
    for(ll i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
    //cout<<ans.size();

    return 0;
}
