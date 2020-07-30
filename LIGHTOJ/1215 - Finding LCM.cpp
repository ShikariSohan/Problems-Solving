/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define M 1000000
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}
vector<int>v;
void sieve()
{
  for (int i = 3; i * i <= M; i += 2) {
    if (marked[i] == false) {
      for (int j = i * i; j <= M; j += i + i) {
        marked[j] = true;
      }
    }
  }
  for(int i=1;i<M;i++)
    if(isPrime(i))
        v.push_back(i);
}
ll x[M],y[M];
void pft(ll x,ll y[])
{
     ll i=0;
    while(x/v[i]>0)
    {        if(x%v[i]==0)
        {
            x=x/v[i];
            y[v[i]]++;

        }
        else i++;
    }
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    sieve();
tin
{
    ll a,b,l,sum=1;
    memset(x,0,sizeof (x));
    memset(y,0,sizeof (y));
    cin>>a>>b>>l;
   ll lk=lcm(a,b);
   pft(lk,x);
   pft(l,y);
   if(l%a!=0||l%b!=0)
   {
       tout;cout<<"impossible"<<ses;
       continue;
   } bool ck=0;
   for(ll i=2;i<M;i++)
   {
       if(x[i]!=0 || y[i]!=0)
       {
           ll p=x[i];
           ll q=y[i];
           ll n=max(p,q);
           if(p!=0 && q==0)
           {
                tout;cout<<"impossible"<<ses;
                continue;ck=1;
           }
           if(q>p)
           {
               while(n--)
                sum*=i;
           }

       }
   }
   if(ck==0)
   {
       tout;cout<<sum<<ses;
   }
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

