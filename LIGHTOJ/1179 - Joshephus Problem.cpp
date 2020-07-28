

/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb insert
#define pf push_front
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define stm istringstream
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define sz 100050
ll find_bloody_joshephus(ll n,ll k)
{
    if(n==1)
        return 0;
    else return (find_bloody_joshephus(n-1,k)+k)%n;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    tin
    {
        ll n,k;
        in(n);
        in(k);
        tout;
        printf("%lld\n",find_bloody_joshephus(n,k)+1);
    }
    return 0;
}
