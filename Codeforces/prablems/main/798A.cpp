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
string s,t="";
ll cnt=0;
int main()
{
    fast_io;
    cin>>s;
    t=s;
    reverse(all(t));
    for(ll i=0;i<s.size();i++){
        if(s[i]!=t[i])cnt++;
    }
    if(cnt==2)cout<<"Yes";
    else if(s.size()%2==1 && cnt==0)cout<<"Yes";
    else cout<<"No";
    return 0;
}
