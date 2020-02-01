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
ll getnum(char c){
    if('0'<=c && c<='9')return c-'0';
    if('A'<=c && c<='Z')return c-'A'+10;
    if('a'<=c && c<='z')return c-'a'+36;
    if(c=='-') return 62;
    if(c=='_') return 63;
}
string s;
ll ans=1,cnt[64] ;
int main()
{
    fast_io;
    cin>>s;
    for(ll i=0;i<64;i++){
        for(ll j=0;j<64;j++){
            cnt[i&j]++;
        }
    }
    for(ll i=0;i<s.size();i++){
        ans=ans*cnt[getnum(s[i])]%MOD;
    }
    cout<<ans<<endl;
    return 0;
}
