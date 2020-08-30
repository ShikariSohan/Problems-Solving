/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ses '\n'
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
ll big_mod(ll n,ll p,ll m)
{
	if(p==0)
	   return 1;
	  if(p%2==0)
	  {
	  	ll ret=big_mod(n,p/2,m);
	  	return ((ret%m)*(ret%m))%m;
	  }
	  else return ((n%m)*(big_mod(n,p-1,m)%m))%m;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

     tin
     {
     	ll a,b;
     	cin>>a>>b;
     	cout<<big_mod(a,b,10)<<ses;
     }


    return 0;
}
