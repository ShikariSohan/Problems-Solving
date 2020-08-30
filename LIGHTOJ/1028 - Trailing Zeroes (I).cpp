/*


                    """Bismillahir Rahmanur Rahim"""

   */
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define stm istringstream
#define sob(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define M 2000000
#define ll long long int
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
  for(ll i=1;i<M;i++)
    if(isPrime(i))
        v.push_back(i);
}
bool isSqrt(ll x)
{
        ll k=sqrt(x);
    if(k*k==x)
    {
        if(isPrime(k))
            return true;

    }
    return false;
}
ll divcount(ll n)
{
    ll ans=1,k=1;
    for(ll i=0;;i++)
    {
        if(v[i]*v[i]>n)
            break;
         k=1;
         if(n%v[i]==0)
         {

             while(n%v[i]==0)
             {
                 k++;
                 n=n/v[i];
             }
         }
         ans=ans*k;
    }
    if(n>1)
        ans*=2;
    return ans;
}
int main()
{
     //freopen ("input.txt","r",stdin);
     //freopen ("output.txt","w",stdout);
    sieve();
    tin
    {
        ll x;
        cin>>x;
        ll n = divcount(x);
        tout;
        cout<<n-1<<ses;
    }


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

