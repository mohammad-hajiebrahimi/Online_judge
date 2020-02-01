#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
typedef long double     ld;

#define all(x)          (x).begin(),(x).end()
#define Sort(x)         sort(all((x)))
#define sep             ' '
#define endl            '\n'
#define tab             '\t'


const ll MOD = 1e9 + 7,
         MAXN= 1e4+10;
ll a[MAXN],b[MAXN],n,d ,ans,e=0;
char s;
int main()
{
    cin>>n;
    for (ll i=0 ;i<n;i++)
    {
        cin>>d>>s;
        if(s=='L')a[d]++;
        if(s=='R')b[d]++;
    }
    for (ll i=0;i<MAXN;i++)
    {
        ans+=min(a[i],b[i]);
    }
    cout<<ans;
}

