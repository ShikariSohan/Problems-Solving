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
vector<ll>v;
int main()
{
  tin
  {
      ll n;
      v.clear();
      cin>>n;
    for(ll i=0;i<10;i++)
    {
        ll x=n-i;
        if(x%9==0)
            v.pb((x/9)*10+i);
    }
    sort(v.begin(),v.end());
    tout;
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" \n"[i==v.size()-1];


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

