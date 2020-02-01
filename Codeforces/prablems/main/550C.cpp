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
string s;
ll a[110];
ll p(ll x,ll y,ll z){
    return x*100+y*10+z;
}
int main()
{
    fast_io;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        a[i]=s[i]-'0';
        if(a[i]==8 || a[i]==0)return cout<<"YES"<<endl<<a[i]<<endl,0;
    }
    for(ll i=0;i<s.size();i++){
        for(ll j=i+1;j<s.size();j++){
            if(p(0,a[i],a[j])%8==0)return cout<<"YES"<<endl<<p(0,a[i],a[j])<<endl,0;
            for(ll k=j+1;k<s.size();k++){
                if(p(a[i],a[j],a[k])%8==0)return cout<<"YES"<<endl<<p(a[i],a[j],a[k])<<endl,0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
