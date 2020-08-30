/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll xxx;cin>>xxx; for(ll o=1;o<=xxx;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
ll a[1005];
bool ck(ll x,ll yo,ll n)
{
    ll cumsum=0,k=0;
    for(ll i=0;i<n;i++)
    {
        cumsum+=a[i];
        if(cumsum>x)
        {
            k++;
            cumsum=a[i];
        }
    }

    if(k<=yo)
        return true;
    else return false;
}
void print(ll ans,ll k,ll n)
{
    ll x=0,cumsum=0;
    for(ll i=0;i<n;i++)
    {
        {
            cumsum+=a[i];
            if(cumsum>ans)
            {
                k--;
                out(cumsum-a[i]);
                cumsum=a[i];
                x=i-1;

            }
        }
        if(n-i==k)
        {
            out(cumsum);
            for(ll j=i+1;j<n;j++)
                out(a[j]);
            break;
        }

    }
}
int main()
{

   tin
   {
       ll n,k;
       in(n);
       in(k);
       ll low=0,high=0;
       for(ll i=0;i<n;i++)
       {
           in(a[i]);
           low=max(a[i],low);
           high+=a[i];
       }
       ll ans=high;
       ll mid;
       while(low<=high)
       {
           mid=(low+high)/2;
           if(ck(mid,k-1,n))
           {
               high=mid-1;
               ans=mid;
           }
           else
           {
               low=mid+1;
           }
       }
      tout;
      out(ans);
      //print(ans,k,n);
   }

}

/*   --------------------
    |      ~SOHAN~       |
    |   ~Chandler68~     |
     ----------------n----
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/
