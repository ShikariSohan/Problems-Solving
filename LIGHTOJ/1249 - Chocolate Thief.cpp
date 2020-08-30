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

int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
       ll t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll total,x,y,z,j;
        string a;

        cin>>total;
         vector< pair < ll ,string > > v(total);
        for(j=0;j<total;j++)
        {
            cin>>a>>x>>y>>z;
            x=x*y*z;
            v[j].first=x;
            v[j].second=a;
        }
        sort(v.begin(),v.end());
        if(v[0].first==v[total-1].first)
        printf("Case %lld: no thief\n",i);
        else
            cout<<"Case "<<i<<": "<<v[total-1].second<<" took chocolate from "<<v[0].second<<endl;
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
