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
ll m,s,out[110];
int main()
{
    fast_io;
    cin>>m>>s;
    if(s==0 && m==1) return cout<<"0 0"<<endl,0;
    if(s==0 ||m==0||m*9<s) return cout<<"-1 -1"<<endl,0;
    out[0]=1;
    ll y=m-1;
    for(ll i=s-1;i!=0;i--){
        while(out[y]==9)y--;
        out[y]++;
    }
    for(ll i=0;i<m;i++){
        cout<<out[i];
    }
    cout<<sep;
    for(ll i=0;i<s/9;i++){
        cout<<9;
    }
    if(s/9!=m)cout<<s%9;
    for(ll i=s/9+1;i<m;i++){
        cout<<0;
    }
    cout<<endl;
    return 0;
}
