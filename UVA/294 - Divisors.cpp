
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
ll f(ll x)
{
    ll k=0;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(x/i==i)
                k++;
            else k+=2;
        }
    }
    return k;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
   tin
   {
       ll l,u;
       scanf("%lld %lld",&l,&u);
       ll ans=l,m=0;
       for(ll i=l;i<=u;i++)
       {
           ll temp=f(i);
           if(temp==m)
            continue;
           else if(temp>m)
           {
               m=temp;
               ans=i;
           }
       }

       cout<<"Between "<<l<<" and "<<u<<", "<<ans<<" has a maximum of "<<m<<" divisors."<<ses;
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


