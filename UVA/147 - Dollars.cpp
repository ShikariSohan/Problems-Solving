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
ll dp[20][30030];
ll cost[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
ll n=11;
ll cube(ll x)
{
    return (x*x*x);
}
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
    double y,z;
    string s;
    memset(dp,-1,sizeof(dp));
    while(cin>>s)
    {
        x=0;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                x=x*10+(s[i]-'0');
            }
        }
        if(x==0)
            return 0;
        ll tk;
        //cout<<"  "<<x<<ses;
        tk=knapscak(0,x);
        ll sp=6-(s.size());
        for(int i=0;i<sp;i++)
            cout<<" ";
        cout<<s;
       printf("%17lld\n",tk);
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

