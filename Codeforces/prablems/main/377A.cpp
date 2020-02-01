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
         MAXN= 5e2+10,
         INF=1e18;

char s[MAXN][MAXN];
ll mark[MAXN][MAXN], n, m, k, e=0, cnt=0,xi=-1, yi=-1;;

void dfs(ll x, ll y){
    if (x<0 || x>=n || y<0 || y>=m || cnt==e-k || mark[x][y] || s[x][y]=='#')return;
    mark[x][y] = 1;
    cnt++;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

int main(){
    fast_io;
    cin >>n>>m>>k;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> s[i][j];
            if (s[i][j] == '.'){
                e++;
                xi = i;
                yi = j;
            }
            if(s[i][j]=='#')mark[i][j]=1;
            else mark[i][j]=0;
        }
    }
    dfs(xi,yi);
    for (int i = 0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(mark[i][j]==0)cout<<'X';
            else cout<<s[i][j];
        }
        cout << endl;
    }
    return 0;
}
