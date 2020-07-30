
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
#define gcd __gcd
#define eps 1e-9
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}


int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
        double o,p,q,c,c1;
        double x,y;
        cin>>x>>y>>c1;
        ll kk=0;
        double hi=max(x,y),lo=0.0,mid;
        while(kk<51)
        {
            kk++;mid=(hi+lo)/2.00;
            p=sqrt((x*x)-(mid*mid));
            q=sqrt((y*y)-(mid*mid));
            c=1.0/((1.0/p)+(1.0/q));
            if(fabs(c-c1)<eps)
                break;
            else if(c>=c1)
                lo=mid;
            else hi=mid;
        }
        printf("Case %lld: %.10lf\n",k,mid);
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

