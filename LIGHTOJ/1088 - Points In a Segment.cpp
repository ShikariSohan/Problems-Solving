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
#define tout cout<<"Case "<<o<<":"<<ses;
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll x,y,n,p,m,q;
    vector<ll> v;
    vector<ll>::iterator lw,up;
tin
{
    v.clear();
     scanf("%lld %lld",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&p);
        v.pb(p);
    }
    tout;
    while(m--)
    {
        scanf("%lld %lld",&x,&y);
        lw=lower_bound(v.begin(),v.end(),x);
        up=upper_bound(v.begin(),v.end(),y);
        p=lw-v.begin();
        q=up-v.begin();
        if(p<q)
            printf("%lld\n",q-p);
        else printf("0\n");
    }

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
