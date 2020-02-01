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
ll ans,n;
string s,c="RGB";
int main()
{
    fast_io;
    cin>>n>>s;
    s+="..";
    for(ll i=0;i<n;i++){
        if(s[i]==s[i+1]){
            ll j=-1;
            while(s[i]==s[i+1] || s[i+1]==s[i+2]){
                j++;
                s[i+1]=c[j];
            }
            ans++;
        }

    }
    cout<<ans<<endl;
    for(ll i=0;i<n;i++)cout<<s[i];
    return 0;
}
