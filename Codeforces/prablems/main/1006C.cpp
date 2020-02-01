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
ll n,a[MAXN],sum1,sum3,ans;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll p1=-1,p3=n;
    while(p1!=p3+1){
        if(sum1<=sum3){
            sum1+=a[p1++];
        }
        else{
            sum3+=a[p3--];
        }
        if(sum1==sum3){
            ans=max(ans,sum1);
        }
        //cout<<p1<<sep<<p3;
    }
    cout<<ans<<endl;
    return 0;
}
