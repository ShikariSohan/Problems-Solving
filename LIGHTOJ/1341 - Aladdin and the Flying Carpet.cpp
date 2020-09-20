
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
void shikariIsListening()
{
    #ifndef ONLINE_JUDGE
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    #endif
}
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define M 10000007
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
  for (ll i = 3; i * i < M; i += 2) {
    if (marked[i] == false) {
      for (ll j = i * i; j < M; j += i + i) {
        marked[j] = true;
      }
    }
  }
  for(ll i=1;i<M;i++)
    if(isPrime(i))
        v.push_back(i);
}
struct just_saul
{
  ll pr,k;
}dummy;
vector<just_saul>fact;
void f(ll n)
{
    ll k=0,exp;
    for (ll i = 0; v[i]*v[i]<= n; ++i) {
        if (n % v[i] == 0) {
                exp = 0;

            while (n % v[i] == 0)
                {
                    n /= v[i];
                     exp++;
                }
                dummy.pr=v[i];
                dummy.k=exp;
                fact.pb(dummy);

        }
    }
    if (n > 1)
        {
            dummy.pr=n;
            dummy.k=1;
            fact.pb(dummy);
        }
    return ;
}
ll ans=0,root,z,n;
void print(ll i,ll sz,ll div)
{
     if(i>=sz)
        {
            if(div*div!=n&&z<=div&&root>=div)
                ans++;
            return;
        }
        for(ll j=0;j<=fact[i].k;j++)
        {
            print(i+1,sz,div);
            div*=fact[i].pr;

        }
}
int main()
{
   shikariIsListening();
   //PaglaGhora;
   sieve();
   tin
   {
       in(n);
       in(z);
       fact.clear();
       f(n);
       ans=0;
       root=sqrt(n);
       print(0,fact.size(),1);
       tout;
       out(ans);

   }

    return 0;
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
