
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
vll v;
ll n,x;
bool x_x(ll yo)
{
   ll y=x;
   y--;
   ll mn=v[0];
   for(ll i=1;i<n&&y>0;i++)
   {

       if(v[i]-mn>=yo)
        {
            y--;
            mn=v[i];
        }
      //  cout<<y<<" "<<mn<<" "<<yo<<" "<<" -"<<ses;

   }
   if(y)
   return false;
   else return true;
}
int main()
{
    //shikariIsListening();

    tin
    {

        cin>>n>>x;
        v.clear();
        ll p;
        for(ll i=0;i<n;i++)
        {
        cin>>p;
        v.pb(p);
        }
        sort(all(v));
        ll low=0,high=v[n-1]-v[0],mid,ans=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(x_x(mid))
            {
                ans=mid;
                low=mid+1;

            }
            else high=mid-1;

        }
        cout<<ans<<ses;

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
