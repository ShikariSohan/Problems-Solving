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
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}


int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    ll t;
    double x,y,a,b,area;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        a=y/2.00;
        if(x==0)
        {
            area=pi*a*a;
            printf("%.3lf\n",area);
            continue;
        }
       b=(y-x)/2.00;
       b=b+(x/2.0);
       a=sqrt(a*a-(x/2.00)*(x/2.00));
       area=pi*a*b;
       printf("%.3lf\n",area);
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


