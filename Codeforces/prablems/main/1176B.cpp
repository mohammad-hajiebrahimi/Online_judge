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
string s;
ll dp[3];
int main()
{
    fast_io;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='o')dp[1]+=dp[0];
        else if(i>0 && s[i-1]=='v'){
            dp[0]++;
            dp[2]+=dp[1];
        }
    }
    cout<<dp[2];
    return 0;
}
