/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define mod 100000007
ll coin[52],coinNumber[55],n,value,dp[51][55][1002];
///dp[index][how many taken][remaining];
ll coinChange(ll i,ll taken,ll rem)
{
    if(i>=n)
    {
        if(rem==0)
          return 1;
        else return 0;
    }
    if(dp[i][taken][rem]!=-1)
        return dp[i][taken][rem];
    ll x=0,y=0;
    if(rem-coin[i]>=0&&taken<coinNumber[i])
        x=coinChange(i,taken+1,rem-coin[i])%mod;
        y=coinChange(i+1,0,rem)%mod;
    return dp[i][taken][rem]=(x+y)%mod;
}
int main()
{

    tin{
   memset(dp,-1,sizeof(dp));
    in(n);
    in(value);
    for(ll i=0;i<n;i++)
        in(coin[i]);
    for(ll i=0;i<n;i++)
        in(coinNumber[i]);
    tout;
    ll x=coinChange(0,0,value);
    out(x);
    }

    return 0;
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~ShikariSohan~   |
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

