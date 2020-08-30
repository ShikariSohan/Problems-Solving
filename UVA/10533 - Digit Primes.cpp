
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>

using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define uset unordered_set
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":\n";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100015
#define EPS 1e-18
#define M 1000052
bool marked[M];

bool isPrime(ll n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

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
ll pref[1000052];
ll f(ll n)
{
    if(!isPrime(n))
        return 0;
     ll sum = 0;
    while (n != 0)
    {
     sum = sum + n % 10;
     n = n/10;
    }
    if(isPrime(sum))
        return 1;
    else return 0;
}
int main()
{
   sieve();
   pref[0]=0;
   for(ll i=1;i<1000007;i++)
   {
       pref[i]=pref[i-1]+f(i);
   }
   ll u,v;
   ll n;
   in(n);
   while(n--)
   {
       in(u);
       in(v);
       out(pref[v]-pref[u]+f(u));
   }



}
/*   --------------------
    |      ~SOHAN~       |
    |   ~ShikariSohan~   |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \ // How you doin'? \
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \
    || It Is Legen --wait for it -- dary ,Legendary ||
    \ Penny - Penny - Penny // -- Bazinga

*/
