
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
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";


int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    while(1)
    {
        ll n,x,m=0;
        ll a[100]={},ar[4]={2,3,5,7};
        cin>>n;
        if(n==0)
            return 0;
        for(ll i=2;i<=n;i++)
        {
            x=i;
           for(ll j=0;j<4;j++)
           {
               if(x%ar[j]==0)
                while(x%ar[j]==0)
               {
                   x=x/ar[j];
                   a[ar[j]]++;
                   m=max(m,ar[j]);
               }
           }
           if(x!=1)
           {
               a[x]++;m=max(m,x);
           }
        }
        printf("%#3lld! =",n);
        ll k=0;

        for(ll i=2;i<100;i++)
            {
                if(a[i]!=0)
            {
               k++;
                if(k==16)
                {
                    cout<<ses;
                    cout<<"      ";
                    k=0;
                }
                printf(" %#2lld",a[i]);


            }

            }
            cout<<ses;

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


