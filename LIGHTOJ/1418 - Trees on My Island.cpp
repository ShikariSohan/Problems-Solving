

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
ll lcm(ll x,ll y){return ((x/gcd(x,y))*y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100015
#define EPS 1e-6
int cmp(ll x)
{
    if(fabs(x)<EPS)
        return 0;
    return x<0?-1:1;
}
struct PT
{
    ll x,y;
    PT()
    {
        x=y=0;
    }
    PT(ll a,ll b)
    {
        x=a,y=b;
    }
    PT operator+(const PT &a) const
    {
        return PT(x+a.x,y+a.y);
    }
    PT operator-(const PT &a) const
    {
        return PT(x-a.x,y-a.y);
    }
    PT operator*(ll a) const
    {
        return PT(x*a,y*a);
    }
    PT operator/(ll a) const
    {
        return PT(x/a,y/a);
    }
    ll val()
    {
        return sqrt(x*x+y*y);
    }
    PT unit()
    {
        return (*this)/val();
    }
    void pin()
    {
        scanf("%lld %lld",&x,&y);
    }
    void pout()
    {
        printf("%.7f %.7f\n",x,y);
    }
};
ll dist(PT a,PT b)
{
    return (a-b).val();
}
ll dot(PT a,PT b)
{
    return a.x*b.x+a.y*b.y;
}
ll cross(PT a,PT b)
{
    return a.x*b.y-a.y*b.x;
}
int main()
{
   shikariIsListening();
   //PaglaGhora;
   vector<PT>v;
   PT p,q;
   ll x,y,ans;
   tin
   {
       ll n;
       in(n);
       v.clear();
       for(ll i=0;i<n;i++)
       {
           p.pin();
           v.pb(p);
       }
       ll b=0;
       for(ll i=0;i<n;i++)
       {
          p=v[i];
          q=v[(i+1)%n];
          x=abs(p.x-q.x);
          y=abs(p.y-q.y);
          b+=gcd(x,y);
       }

       ll a=0,temp;
       for(ll i=1;i<n-1;i++)
       {
         temp=cross(v[i]-v[0],v[i+1]-v[0]);
         a+=temp;
       }
      // cout<<a<<" "<<b<<ses;
       ans=abs(a/2)+1-(b/2);

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
