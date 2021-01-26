

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
    double x,y;
    PT()
    {
        x=y=0;
    }
    PT (double a,double b)
    {
        x=a;y=b;
    }
    PT operator+(const PT &a) const
    {
        return PT(x+a.x,y+a.y);
    }
    PT operator-(const PT &a) const
    {
        return PT(x-a.x,y-a.y);
    }
    PT operator*(double a) const
    {
        return PT(x*a,y*a);
    }
    PT operator/(double a) const
    {
        return PT(x/a,y/a);
    }
    void pin()
    {
        cin>>x>>y;
    }

};
bool comp(PT a,PT b)
{
     if(a.x<b.x)
        return 1;
    else if(a.x==b.x&&a.y<b.y)
        return 1;
    return 0;
}
int main()
{
   shikariIsListening();
   //PaglaGhora;
   vector<PT>v,a;
   PT p,q;
   ll x,y,ans;
   tin
   {
       ll n;
       in(n);
       v.clear();
       a.clear();
       for(ll i=0;i<n;i++)
       {
           p.pin();
           v.pb(p);
       }
       ll l=0;
       for(ll i=0;i<n;i++)
        for(ll j=i+1;j<n;j++)
       {
           a.pb((v[i]+v[j])/2);
           l++;
       }
       sort(all(a),comp);
       ll sum=0,temp,k=1;
       for(ll i=1;i<l;i++)
       {
           if(a[i].x==a[i-1].x &&a[i].y==a[i-1].y)
            k++;
           else
           {
               temp=(k*(k-1))/2;
               sum+=temp;
               k=1;
           }

       }
        temp=(k*(k-1))/2;
        sum+=temp;
        tout;
        cout<<sum<<ses;


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
