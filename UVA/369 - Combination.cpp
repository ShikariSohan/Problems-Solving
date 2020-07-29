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
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
ll dp[1000000][110];
ll g(ll a,ll b)
{
    if(a==b)
    {
        return 1;
    }
    if(b==1)
        return a;
    if(dp[a][b]==-1)
    return dp[a][b]=g(a-1,b-1)+g(a-1,b);
    else return dp[a][b];
}
int main()
{
    //freopen ("input.txt","r",stdin);
    // freopen ("output.txt","w",stdout);
    ll n,m;
    memset(dp,-1,sizeof(dp));
    tin
    {
        cin>>n>>m;
        tout;
        if(m==0)
            cout<<1<<ses;
        else
           cout<<g(n,m)<<ses;
    }
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~Chandler68~     |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do Th*is All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/

