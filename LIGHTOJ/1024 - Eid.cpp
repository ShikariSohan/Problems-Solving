/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%d",&x);
#define out(x) printf("%d",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define M 10000
bool marked[M+6];
ll fact[M+6];
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
void lm(ll n)
{
   ll temp=0;
    for(ll i=0;(v[i]*v[i])<=n;i++)
    {
        if(n%v[i]==0)
        {
            temp=0;
            while(n%v[i]==0)
            {
                n=n/v[i];
                temp++;
            }
            fact[v[i]]=max(fact[v[i]],temp);
        }
    }
    if(n!=1)
    {
      fact[n]=max(fact[n],1);
    }
}
vector<ll> tos(ll n)
{
    vector<ll> s;
    while(n/10!=0)
    {
        s.pb(n%10);

        n/=10;
    }
    if(n!=0)
    s.pb(n);
    return s;
}
ll ans[1000010]={0};
vector<ll>x;
vector<ll>an;
vector<ll> multiply(vector<ll> a,vector<ll> b,ll zz)
{
    ll p,c,k,i,j;
    x.clear();


    ll l=0;
    for(i=0; i<a.size(); i++)
    {
        c=0;
        for(j=0; j<b.size(); j++)
        {
            p=((a[i])*(b[j]))+c;
            c=(p/10);
            ans[i+j]+=(p%10);
            k=(ans[i+j]/10);
            ans[i+j]%=10;
            ans[i+j+1]+=k;
        }
        ans[i+j]+=c;
        k=(ans[i+j]/10);
        ans[i+j]%=10;
        ans[i+j+1]+=k;
    }
    l=max(a.size(),b.size())+5;
    bool ok=false;
    for(ll i=l;i>=0;i--)
    {

        if(ans[i]!=0)
        {
            ok=true;
        }
        if(ok)
            x.pb(ans[i]);
        ans[i]=0;
    }

    reverse(x.begin(),x.end());
    return x;
}

int main()
{
// freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
   sieve();
   tin
   {
      an.clear();
       ll n,m;
       double dig=0;
       memset(fact,0,sizeof(fact));
       in(n);
       for(ll i=0;i<n;i++)
       {
           in(m);
           lm(m);
       }
       an.pb(1);
       for(ll i=2;i<M+1;i++)
       {
           ll x=fact[i];
          if(x>0)
              while(x--)
              {
                   an=multiply(an,tos(i*10),1);
                   dig+=(log10(i));
              }

       }
       dig=floor(dig)+1;
       tout;
       ll dg=(ll)dig;
       ll kk=0;
      for(ll i=an.size()-1;;i--)
       {

            out(an[i]);

             kk++;
             if(kk==dg)
                break;

       }
      cout<<ses;
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
