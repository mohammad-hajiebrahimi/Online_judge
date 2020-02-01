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
ll n,l;
int main(){
  fast_io;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    l=s.size();
    if(s[l-1]=='x'||s[l-1]=='s'||s[l-1]=='o'||(s[l-1]=='h'&&s[l-2]=='c'))cout<<s<<"es\n";
    else if(s[l-1]=='f')cout<<s.substr(0,l-1)<<"ves\n";
    else if(s[l-1]=='e'&&s[l-2]=='f')cout<<s.substr(0,l-2)<<"ves\n";
    else if(s[l-1]=='y')cout<<s.substr(0,l-1)<<"ies\n";
    else cout<<s<<"s\n";
  }
}
