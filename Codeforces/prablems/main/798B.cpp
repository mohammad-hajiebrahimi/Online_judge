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
         MAXN= 1e2+10,
         INF=1e18;
string f(string s){
    string ss=s.substr(1,s.size()-1);
    ss+=s[0];
    return ss;
}
string str[MAXN],strs[MAXN][MAXN];
ll n,ans=INF;
int main()
{
    fast_io;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>str[i];
    }
    for(ll i=0;i<n;i++){
        if(str[i].size()!=str[0].size())return cout<<-1<<endl,0;
    }
    for(ll i=0;i<n;i++){
        strs[i][0]=str[i];
        for(ll j=0;j<str[i].size();j++){
            strs[i][j+1]=f(strs[i][j]);
        }
    }
    for(ll i=0;i<n;i++){
        ll t=0;
        for(ll j=0;j<n;j++){
            ll b=0;
            for(ll k=0;k<str[j].size();k++){
                if(str[i]==strs[j][k]){
                    t+=k;
                    b=1;
                    break;
                }
            }
            if(!b)return cout<<-1<<endl,0; 
        }
        ans=min(ans,t);
    }
    cout<<ans<<endl;
    return 0;
}
