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
ll a[MAXN],n,ans;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)a[i]=-a[i];
    }
    for(ll i=0;i<n;i++){
        ll ans1=0,ans2=0;
        if(a[i]!=0){
            for(ll j=0;j<n;j++){
                if(a[j]<a[i]){
                    if(j<i)ans1++;
                    if(j>i)ans2++;
                }
            }
        }

        //cout<<min(ans1,ans2)<<endl;
        ans+=min(ans1,ans2);
    }
    cout<<ans;
    return 0;
}
