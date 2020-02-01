#include <bits/stdc++.h>
using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<ll,ll>                 pll;
typedef pair<ld,ld>                 pld;
typedef tuple<ll,ll,ll>             tlll;
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
         MAXN= 5010,
         INF=1e18;
ll n,w,h,wi,hi,dp[MAXN],ans=0,ai=-1,mx,pi,pr[MAXN];
vector<tlll>p;
vector<ll> ans1;
void COUT(ll i){
    if(i==-1) return;
    COUT(pr[i]);
    cout<<get<2>(p[i])<<sep;
}
int main()
{
    fast_io;
    cin>>n>>w>>h;
    for(ll i=1;i<=n;i++){
        cin>>wi>>hi;
        if(wi>w && hi>h)
        p.push_back(tlll{wi,hi,i});
    }
    ll np=p.size();
    sort(p.begin(),p.end());
    for(ll i=0;i<np;i++){
        mx=0;
        pi=-1;
        for(ll j=0;j<i;j++){
            if(get<0>(p[j]) < get<0>(p[i]) && get<1>(p[j]) < get<1>(p[i]) && mx<dp[j] ){
                mx=dp[j];
                pi=j;
            }
        }
        dp[i]=mx+1;
        pr[i]=pi;
        if(dp[i]>ans)ans=dp[i],ai=i;
    }
    cout<<ans<<endl;
    COUT(ai);
    cout<<endl;
    return 0;
}
