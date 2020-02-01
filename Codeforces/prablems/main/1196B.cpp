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
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll q,n,k,a[MAXN];
int main()
{
    fast_io;
    cin>>q;
    while(q--){
        vector<ll>ans;
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            if(sum%2){
                ans.push_back(i+1);
                sum=0;
            }
        }
        if(ans.size()<k || (k-ans.size())%2)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(ll i=0;i<k-1;i++){
                cout<<ans[i]<<sep;
            }
            cout<<n<<endl;
        }
    }
    return 0;
}
