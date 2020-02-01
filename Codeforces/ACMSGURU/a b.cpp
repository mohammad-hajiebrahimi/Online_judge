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
         MAXN= 1e6+10;
ll a,b;
int main()
{
  cin>>a>>b;
  cout<<pow(a,b) - pow(b,a)<<endl;
  return 0;
}
