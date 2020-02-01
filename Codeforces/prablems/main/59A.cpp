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
string s;
ll l,u;
int main()
{
    fast_io;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        if(isupper(s[i]))u++;
        else l++;
    }
    if(u>l){
        for(ll i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{

            for(ll i=0;i<s.size();i++){
                s[i]=tolower(s[i]);
    }
}
    cout<<s;
    return 0;
}
