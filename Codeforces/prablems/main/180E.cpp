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
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 2e5+10,
         INF=1e18;
ll n, m ,k ,a[MAXN],ans,cnt;
vector<ll>vec[MAXN];
int main()
{
    fast_io;
    cin >> n >> m >> k;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        vec[a[i]].push_back(i);
    }
    for(ll i=1;i<=m;i++){
        ll cnt=0;
        for(ll j=0;j<SZ(vec[i]);j++){
            cnt=max(cnt,j);
            while(cnt<SZ(vec[i]) && -vec[i][j]+vec[i][cnt] +1-(cnt-j +1)<=k)cnt++;
            ans=max(ans,cnt-j);
            //cout<<ans<<sep<<j<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
