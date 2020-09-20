/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define M 3000050
bool marked[M];

bool isPrime(ll n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}
vector<ll>v;
void sieve()
{
  for (ll i = 3; i * i <= M; i += 2) {
    if (marked[i] == false) {
      for (ll j = i * i; j <= M; j += i + i) {
        marked[j] = true;
      }
    }
  }
}

int main()
{
    sieve();
    ll n,x;
    in(n);
    for(ll i=0;i<n;i++)
    {
        in(x);
        if(isPrime(x))
        {
            cout<<x<<" is a prime number."<<ses;
        }
        else cout<<x<<" is not a prime number."<<ses;
    }

     return 0;
}




/*   --------------------
    |      ~SOHAN~       |
    |   ~Chandler68~     |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/
