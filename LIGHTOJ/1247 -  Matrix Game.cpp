
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
#define eps 1e-7
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    tin
    {
       ll x,y,d,sum=0,r;
       cin>>x>>y;
       for(ll i=0;i<x;i++)
       {
          ll k=0;
          for(int j=0;j<y;j++)
           {
               cin>>r;
               k=k+r;
           }
           sum^=k;
       }tout;
       if(sum==0)
        cout<<"Bob"<<ses;
       else cout<<"Alice"<<ses;
    }
}


