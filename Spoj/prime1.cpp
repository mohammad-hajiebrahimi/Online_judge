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
#define SZ(x)           x.size()
#define kill(x)         return cout<<x<<endl,0;
#define fast_io         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io         freopen("in.txt" , "r" , stdin) ; freopen("out.txt" , "w" , stdout);
#define set_random      mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
const ll MOD = 1e9 + 7,
         MAXN= 1e8+10,
         INF=1e18;
ll q,a,b;
bool prime[MAXN];

int main()
{
    fast_io;
    cin >> q;
    memset(prime, true, sizeof(prime));
    prime[1]=0;
    for (int p=2; p*p<=MAXN; p++)
        {
        if (prime[p] == true)
        {
        for (int i=p*2; i<=MAXN; i += p)
            prime[i] = false;
        }
    }
    while(q--){
        cin >> a >> b;
        for(ll i=a;i<=b;i++){
            if(prime[i])cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
