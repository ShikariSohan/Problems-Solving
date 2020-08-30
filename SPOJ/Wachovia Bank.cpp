
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
ll w,n;
ll cost[55],wt[55];
ll dp[55][2000];
ll knapsack(ll idx,ll rem)
{
   if(idx>=n)
        return 0;
   if(dp[idx][rem]!=-1)
    return dp[idx][rem];
   ll x,y;
    if(wt[idx]>rem)
        x=0;
    else x=cost[idx]+knapsack(idx+1,rem-wt[idx]);
     y=knapsack(idx+1,rem);
     dp[idx][rem]=max(x,y);
     return dp[idx][rem];
}
int main()
{
    tin
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld %lld",&w,&n);
        for(ll i=0;i<n;i++)
            scanf("%lld %lld",&wt[i],&cost[i]);
        ll yo=knapsack(0,w);
        cout<<"Hey stupid robber, you can get "<<yo<<"."<<ses;
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
