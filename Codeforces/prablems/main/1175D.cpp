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
vector<ll>vec;
ll n,k,a[MAXN],ans,sum;
int main()
{
    fast_io;
    cin>>n>>k;
    k--;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=n-1;i>0;i--){
        sum+=a[i];
        vec.push_back(sum);
    }
    ans=sum+a[0];
    sort(all(vec),greater<ll>());
    for(ll i=0;i<k;i++)ans+=vec[i];
    cout<<ans;
    return 0;
}
