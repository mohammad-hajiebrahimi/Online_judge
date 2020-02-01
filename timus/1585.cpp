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
         MAXN= 1e6+10,
         INF=1e18;
int main(){
    int N,cont[3];
    char s[10];

    cont[0] = cont[1] = cont[2] = 0;

    scanf("%d",&N);

    for(int i = 0;i < N;++i){
        scanf("%s",s);

        if(s[0] == 'E') ++cont[0];
        if(s[0] == 'L') ++cont[1];
        if(s[0] == 'M') ++cont[2];

        scanf("%s",s);
    }

    int best = max(cont[0],max(cont[1],cont[2]));

    if(cont[0] == best) puts("Emperor Penguin");
    if(cont[1] == best) puts("Little Penguin");
    if(cont[2] == best) puts("Macaroni Penguin");

    return 0;
}
