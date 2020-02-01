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
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e6+10,
         INF=1e18;
ll dpm[110][60][2],dpx[110][60][2];
ll n,d,ansm=INF,ansx=-INF,ans,size_s;
string s;
int main()
{
    fast_io;
    cin>>s>>n;
    memset(dpm,100,sizeof(dpm));
    memset(dpx,-100,sizeof(dpx));
    dpm[0][0][0]=0;
    dpx[0][0][0]=0;
    size_s=s.size();
    for(ll i=0;i<size_s;i++){
        for(ll j=0;j<=n;j++){
            for(ll k=0;k<2;k++){
                if(s[i]=='T'){
                    if(k)d=1;
                    else d=-1;
                    dpm[i+1][j+1][k]=min(dpm[i+1][j+1][k],dpm[i][j][k]+d);
                    dpx[i+1][j+1][k]=max(dpx[i+1][j+1][k],dpx[i][j][k]+d);
                }
                else{
                    if(k)d=1;
                    else d=-1;
                    dpm[i+1][j][k]=min(dpm[i+1][j][k],dpm[i][j][k]+d);
                    dpx[i+1][j][k]=max(dpx[i+1][j][k],dpx[i][j][k]+d);
                }
                if(s[i]=='F'){
                    if(k)d=0;
                    else d=1;
                    dpm[i+1][j+1][d]=min(dpm[i+1][j+1][d],dpm[i][j][k]);
                    dpx[i+1][j+1][d]=max(dpx[i+1][j+1][d],dpx[i][j][k]);
                }
                else{
                    if(k)d=0;
                    else d=1;
                    dpm[i+1][j][d]=min(dpm[i+1][j][d],dpm[i][j][k]);
                    dpx[i+1][j][d]=max(dpx[i+1][j][d],dpx[i][j][k]);
                }

            }
        }
    }
    for(ll i=n%2;i<=n;i+=2){
        ansm=min({ansm,dpm[size_s][i][0],dpm[size_s][i][1]});
        ansx=max({ansx,dpx[size_s][i][0],dpx[size_s][i][1]});
    }
    ansm=abs(ansm);
    ansx=abs(ansx);
    ans=max(ansm,ansx);
    cout<<ans;
    return 0;
}
