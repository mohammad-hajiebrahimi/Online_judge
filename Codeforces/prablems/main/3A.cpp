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
string s,t;
ll l,r;
int main()
{
    fast_io;
    cin>>s>>t;
    l=s[0]-t[0];
    r=s[1]-t[1];
    cout<<max(abs(l),abs(r))<<endl;
    ll k=max(abs(l),abs(r));
    for(ll i=0;i<k;i++){
        if(l>0)cout<<'L',l--;
        else if( l!=0) cout<<'R',l++;
        if(r>0)cout<<'D',r--;
        else if(r!=0) cout<<'U',r++;
        cout<<endl;
    }
    return 0;
}
