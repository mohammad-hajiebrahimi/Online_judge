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
    int T;
    scanf("%d",&T);

    char pos[3];
    int dr[] = {-2,-2,-1,-1,1,1,2,2};
    int dc[] = {-1,1,-2,2,-2,2,-1,1};

    while(T--){
        scanf("%s",pos);

        int r = pos[0]-'a', c = pos[1]-'1', ans = 0;

        for(int i = 0;i<8;++i){
            int r2 = r+dr[i], c2 = c+dc[i];

            if(r2>=0 && r2<8 && c2>=0 && c2<8) ++ans;
        }

        printf("%d\n",ans);
    }

    return 0;
}
