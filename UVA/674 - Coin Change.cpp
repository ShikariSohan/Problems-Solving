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
ll dp[11][9000];
ll cost[]={1,5,10,25,50};
ll n=5;
ll knapscak(ll idx,ll rem)
{
    if(idx>=n)
        {
            if(rem==0)
                return 1;
            else return 0;
        }
    if(dp[idx][rem]!=-1)
        return dp[idx][rem];
    ll x,y;
    if(cost[idx]>rem)
        x=0;
    else x=knapscak(idx,rem-cost[idx]);
     y=knapscak(idx+1,rem);
     dp[idx][rem]=x+y;
     return dp[idx][rem];
}

int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll x;
    memset(dp,-1,sizeof(dp));
    while(~ scanf("%lld",&x))
    {

        ll tk=0;
        tk=knapscak(0,x);
        printf("%lld\n",tk);
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

