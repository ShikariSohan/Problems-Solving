
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
#define M 200007
vector<ll>v,v1;
ll n,p,m;
bool f(ll x,ll y)
{
    ll l=0,r=n-1,mid;
    bool yo=false;
    while(l<=r)
    {
       mid=(l+r)/2;
       if(v[mid]==x)
       {
          if(y==1)
          {
              if((mid>0&&v[mid-1]==x)||(mid<n-1&&v[mid+1]==x))
                return true;
              return false;
          }
          yo=true;
          break;
       }
       else if(v[mid]>x)
       {
           r=mid-1;
       }
       else l=mid+1;
    }
    return yo;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    while(cin>>n)
    {
        v.clear();
        v1.clear();
        for(ll i=0;i<n;i++)
        {
            cin>>p;
            v.pb(p);
        }
        sort(all(v));
        cin>>p;
        ll ans=-1,ans1=-1,temp=inf;
        for(ll i=0;i<n;i++)
        {
            ll x=p-v[i];
            ll yo;
            if(x==v[i])
                yo=1;
            else yo=0;
            if(x>=0&&f(x,yo))
            {
                if(abs(x-v[i])<temp)
                {
                    temp=abs(x-v[i]);
                    ans1=x;
                    ans=v[i];
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<min(ans1,ans)<<" and "<<max(ans1,ans)<<".\n";
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
