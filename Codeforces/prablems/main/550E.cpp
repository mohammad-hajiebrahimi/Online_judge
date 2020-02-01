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
ll n;
int main()
{
    fast_io;
    cin>>n>>s;
    if(n==1){
        if(s[0]=='0')return cout<<"YES"<<endl<<0<<endl,0;
        return cout<<"NO"<<endl,0;
    }
    if(n==2){
        if(s[0]=='0' && s[1]=='1'){
            return cout<<"YES"<<endl<<"0->1"<<endl,0;
        }
        return cout<<"NO"<<endl,0;
    }
    if(n>2){
        if(s[n-1]=='1')return cout<<"NO"<<endl,0;
        else{
            if(s[n-2]=='1'){
                cout<<"YES"<<endl<<s[0];
                for(ll i=1;i<n;i++){
                    cout<<"->"<<s[i];
                }
                return 0;
            }
            else{
                ll p=-1;
                for(ll i=0;i<n-2;i++){
                    if(s[i]=='0')p=i;
                }
                if(p==-1) return cout<<"NO"<<endl,0;
                cout<<"YES"<<endl;
                for(ll i=0;i<p;i++){
                    cout<<s[i]<<"->";
                }
                cout<<"(0->(";
                for(ll i=p+1;i<n-2;i++){
                    cout<<s[i]<<"->";
                }
                cout<<"0))->0"<<endl;
            }
        }
    }

    return 0;
}
