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
         MAXN= 3e3+10,
         INF=1e18;
ll g[MAXN*MAXN],h[MAXN][MAXN],n,m,a,b,x,y,z,ans[MAXN][MAXN],cnt;
int main()
{
    fast_io;
    cin >> n >> m >> a >> b >> g[0] >> x >> y >> z;
    for(ll i=1;i<MAXN*MAXN;i++){
        g[i]=((g[i-1]*x)%z+y)%z;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            h[i][j]=g[(i-1)*m+j-1];
            //cout<<h[i][j]<<sep;
        }
        //cout<<endl;
    }
    for(ll i=1;i<=n;i++){
        deque<ll>minr;
        for(ll j=1;j<=m;j++){
            while(minr.size()>0 && minr.front()<=j-b)minr.pop_front();
            while(minr.size()>0 && h[i][minr.back()]>=h[i][j])minr.pop_back();
            minr.push_back(j);
            ans[i][j]=h[i][minr.front()];
            //cout<<ans[i][j]<<sep;
        }
        //cout<<endl;
    }
    for(ll j=b;j<=m;j++){
        deque<ll>minc;
        for(ll i=1;i<=n;i++){
            while(minc.size()>0 && minc.front()<=i-a)minc.pop_front();
            while(minc.size()>0 && ans[minc.back()][j]>=ans[i][j])minc.pop_back();
            minc.push_back(i);
            h[i][j]=ans[minc.front()][j];
            //cout<<ans[i][j]<<sep;
        }
        //cout<<endl;
    }
    for(ll i=a;i<=n;i++){
        for(ll j=b;j<=m;j++){
            cnt+=h[i][j];
        }
    }
    cout<<cnt<<endl;

    return 0;
}
