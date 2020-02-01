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
ll v1,v2,t,d,ans,s[MAXN];
int main()
{
    fast_io;
    cin>>v1>>v2>>t>>d;
    if(v2<v1)swap(v1,v2);
    s[0]=v1;
    s[t-1]=v2;
    for(ll i=1 ;i<t-1;i++){
        for(ll j=d;j>=-d;j--){
            if(s[i-1]+j-(t-i-1)*d<=v2){
                s[i]=s[i-1]+j;
                //cout<<s[i]<<sep;
                break;
            }
        }
    }
    for(ll i=0;i<t;i++){
        ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}
