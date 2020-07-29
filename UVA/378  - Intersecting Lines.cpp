
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
const int sz = 1000001;
#define mp make_pairllll
#define ses '\n'
#define stm istringstream
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
ll area(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
    return x1*y2-y1*x2+x2*y3-y2*x3+x3*y1-y3*x1;
}

int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll t;
    cin>>t;
    cout<<"INTERSECTING LINES OUTPUT"<<ses;
    while(t--)
    {
       ll x1,y1,x2,y2,x3,y3,x4,y4 ;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4 ;
        if( area(x1,y1,x2,y2,x3,y3)==0 && area(x1,y1,x2,y2,x4,y4)==0)
        {
            cout<<"LINE"<<ses;
            continue ;
        }
        ll a1=y2-y1;
        ll b1=x1-x2;
        ll c1=y1*x2-x1*y2;
        ll a2=y4-y3;
        ll b2=x3-x4;
        ll c2=y3*x4-x3*y4;
        ll m=(a1*b2-b1*a2);
        if(m==0)
        {
           cout<<"NONE"<<ses;
            continue ;
        }
        double x=((b1*c2-b2*c1)*1.0)/((a1*b2-a2*b1)*1.0) ;
        double y=((c1*a2-c2*a1)*1.0)/((a1*b2-a2*b1)*1.0) ;
          printf("POINT %.2lf %.2lf\n",x,y) ;
    }
    cout<<"END OF OUTPUT"<<ses;



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

