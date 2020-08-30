
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
#define ses puts("")
#define stm istringstream


int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll x,y,sum=2,k=0,s;

        cin>>x;
        for(ll i=0;i<x;i++)
        {
          cin>>y;
          if(y-sum==0)
            sum=y;
         else if(y-sum<=5)
            {
                k++;
                sum=y;
            }
         else {
            s=y-sum;
            sum=y;
            if(s%5==0)
                k=k+(s/5);
            else k=k+(s/5)+1;
         }

        }
         cout<<"Case "<<j<<": "<<k;
          ses;

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
