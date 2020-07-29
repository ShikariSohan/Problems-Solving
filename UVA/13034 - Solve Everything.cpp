
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
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}


int main()
{
    ll a,k=0,t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {   k=0;
        for(ll j=0;j<13;j++)
        {
            cin>>a;
            if(a==0)
                k=1;
        }
        if(k==0)
            printf("Set #%lld: Yes\n",i+1);
        else  printf("Set #%lld: No\n",i+1);
    }
}


