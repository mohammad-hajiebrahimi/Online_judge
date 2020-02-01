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
         MAXN= 110,
         INF=1e18;
ll n,m;
struct matrix{
    ll mat[MAXN][MAXN];
    matrix(){
        memset(mat,0,sizeof(mat));
    }
    matrix operator *(matrix &a){
        matrix b;
        for(ll i=1;i<=m;i++){
            for(ll j=1;j<=m;j++){
                for(ll k=1;k<=m;k++){
                    b.mat[i][j]+=mat[i][k]*a.mat[k][j];
                    b.mat[i][j]%=MOD;
                }
            }
        }
        return b;
    }
};
matrix s,e,f,ans;
matrix mat_power(matrix a,ll b){
    matrix ans1=e;
    while(b){
        if(b&1)ans1=ans1*a;
        a=a*a;
        b>>=1;
    }
    return ans1;
}
int main()
{
    fast_io;
    cin>>n>>m;
    for(ll i=1;i<m;i++){
        s.mat[i][i+1]=1;
    }
    s.mat[m][1]=1;
    s.mat[m][m]=1;
    for(ll i=1;i<=m;i++){
        e.mat[i][i]=1;
        f.mat[i][1]=1;
    }
    ans=mat_power(s,n);
    ans=ans*f;
    cout<<ans.mat[1][1]<<endl;
    return 0;
}
