
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
#define tout cout<<"Case "<<o<<":\n";
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
ll f(ll x)
{
    ll yo=0;
    ll k=0;
    ll x1=x;
    for(ll i=0;v[i]*v[i]<=x;i++)
    {
        if(x%v[i]==0)
        {
            yo=max(yo,v[i]);
            k++;
            while(x%v[i]==0)
            {
                x/=v[i];
            }
        }
    }
    if(x>1)
    {
        yo=max(x,yo);
        k++;
    }
    if(k>=2)
    return yo;
    else return x1;
}
int main()
{
   shikariIsListening();
   PaglaGhora;
   sieve();
   ll n;
   while(1)
   {

       cin>>n;
       if(n==0)
        return 0;
        if(n<0)
            n*=(-1LL);
       ll x=f(n);
       if(n==x)
        cout<<"-1"<<ses;
       else cout<<x<<ses;
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
