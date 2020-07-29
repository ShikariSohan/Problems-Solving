
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
#define asho(x) scanf("%lld",&x);
#define dekho(x) printf("%lld\n",x);
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define stm istringstream
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":"<<ses;
#define M 100400
#define all(x) x.begin(),x.end()
int main()
{
    //freopen ("input.txt","r",stdin);
     string s;
     ll sum=0,l,t;
     while(1)
     {
       cin>>s;
         if(s=="0")
            return 0;
        sum=0;
        l=s.size();
        t=l;
        for(ll i=0;i<t;i++)
        {
            sum+=((1<<l)-1)*(s[i]-'0');
            l--;
        }
        cout<<sum<<ses;

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

