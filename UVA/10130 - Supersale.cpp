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
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
ll dp[1010][110];
ll wt[1010];
ll cost[1010];
ll n;
ll knapscak(ll idx,ll rem)
{
    if(idx>=n)
        return 0;
    if(dp[idx][rem]!=-1)
        return dp[idx][rem];
    ll x,y;
    if(wt[idx]>rem)
        x=0;
    else x=cost[idx]+knapscak(idx+1,rem-wt[idx]);
     y=knapscak(idx+1,rem);
     dp[idx][rem]=max(x,y);
     return dp[idx][rem];
}

int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    tin
    {
        scanf("%lld",&n);
        memset(dp,-1,sizeof(dp));
        for(ll i=0;i<n;i++)
            scanf("%lld %lld",&cost[i],&wt[i]);
        ll t,p,sum=0;
        scanf("%lld",&t);
        while(t--)
        {
            scanf("%lld",&p);
             sum=sum+knapscak(0,p);
        }
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

