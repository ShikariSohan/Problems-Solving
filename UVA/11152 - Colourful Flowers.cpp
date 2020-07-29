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
    double x,y,z,s,a,b,tri,cir,crii;
    while(cin>>x>>y>>z)
    {
        s=(x+y+z)/2.0;
        tri=sqrt(s*(s-x)*(s-y)*(s-z));
        cir=(x*y*z)/(4*tri);
        cir=pi*cir*cir;
        cir=cir-tri;
        crii=(2.00*tri)/((x+y+z)*1.00);
        crii=pi*crii*crii;
        printf("%.4lf %.4lf %.4lf\n",cir,tri-crii,crii);
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


