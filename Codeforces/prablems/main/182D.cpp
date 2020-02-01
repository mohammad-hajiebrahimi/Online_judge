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
ll n,m,ans;
string a,b;
set<string>st;
int main()
{
    fast_io;
    cin>>a>>b;
    n=a.size();
    m=b.size();
    string s;
    for(ll i=0;i<n;i++){
        s+=a[i];
        if(n%(i+1))continue;
        string aa;
        for(ll j=0;j<n/(i+1);j++){
            aa+=s;
        }
        if(a==aa)st.insert(s);
    }
    //cout<<st.size();
    s="";
    for(ll i=0;i<m;i++){
        s+=b[i];
        if(m%(i+1))continue;
        string bb;
        for(ll j=0;j<m/(i+1);j++){
            bb+=s;
        }
        if(b==bb && st.find(s)!=st.end()){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
