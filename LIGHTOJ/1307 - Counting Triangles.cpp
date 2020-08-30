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
#define ses '\n'
#define stm istringstream
#define all(v) v.begin(),v.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";

int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
vector<ll>v;
ll n,p;
   tin
   {
       v.clear();
       scanf("%lld",&n);
       for(int i=0;i<n;i++)
       {
           scanf("%lld",&p);
           v.pb(p);
       }
       sort(all(v));
       ll sum=0;
       for(ll i=0;i<n;i++)
        for(ll j=i+1;j<n;j++)
       {
           ll x=v[i]+v[j];
           ll idx=upper_bound(all(v),x-1)-v.begin()-1;
            sum+=idx-j;
       }
       tout;
       printf("%lld\n",sum);

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

