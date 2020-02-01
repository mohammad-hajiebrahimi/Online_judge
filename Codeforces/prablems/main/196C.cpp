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
         INF=1e5;
ll q,n,f1,f2,f3,f4,x,y;
int main()
{
    fast_io;
    cin>>q;
    while(q--){
        cin>>n;
        ll mxx=INF,mix=-INF,mxy=INF,miy=-INF;
        for(ll i=0;i<n;i++){
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(!f1){
                mix=max(x,mix);
            }
            if(!f2){
                mxy=min(y,mxy);
            }
            if(!f3){
                mxx=min(x,mxx);
            }
            if(!f4){
                miy=max(y,miy);
            }
        }
        if(miy>mxy || mix>mxx){
            cout<<0<<endl;
        }
        else{
            cout<<1<<sep<<mix<<sep<<miy<<endl;
        }
    }
    return 0;
}
