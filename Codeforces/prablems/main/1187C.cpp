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
ll n,m,a[MAXN],t[MAXN],l[MAXN],r[MAXN];
vector<pll>vec;
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        cin>>t[i]>>l[i]>>r[i];
        l[i]--;
        r[i]--;
    }
    for(ll i=0;i<m;i++){
        if(t[i]){
            for(ll j=l[i];j<r[i];j++){
                a[j]=1;
            }
        }
    }
    for(ll i=0;i<m;i++){
        if(t[i]==0){
            ll ok=0;
            for(ll j=l[i];j<r[i];j++){
                if(a[j]==0)ok=1;
            }
            if(!ok)return cout<<"NO"<<endl,0;
        }

    }
    cout<<"YES"<<endl;
    ll pos=4000;
    cout<<pos<<sep;
    for(ll i=1;i<n;i++){
        if(a[i-1]==0)pos--;
        cout<<pos<<sep;
    }
    return 0;
}
