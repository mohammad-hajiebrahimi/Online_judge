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
ll k,a,b,ans;
string s;
int main()
{
    fast_io;
    cin>>k>>a>>b>>s;
    ans=s.size()/k;
    ll rem=s.size()%k;
    if(ans>b || ans<a || (ans==b && rem>0)){
        return cout<<"No solution"<<endl,0;
    }
    ll p=0;
    for(ll i=0;i<k;i++){
        for(ll j=0;j<ans+(rem>0);j++){
            cout<<s[p+j];
        }
        cout<<endl;
        p+=ans+(rem>0);
        rem--;
    }
    return 0;
}
