/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
#define asho(x) scanf("%lld",&x);
#define dekho(x) printf("%lld\n",x);
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define stm istringstream
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":"<<ses;
#define M 100400
#define all(x) x.begin(),x.end()
vector<ll>v;
vector<ll>f[5010];
vector<ll> jog_kori(vector<ll> a, vector<ll> b)
{
        v.clear();
      ll temp=0,l,l1,i,x,y;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
     l=a.size();
     l1=b.size();
     for(i=0;i<l1;i++)
        {
            x=a[i];
            y=b[i];
            x=x+y+temp;
            y=x%10;
            temp=x/10;
            v.pb(y);
        }
        for(i=l1;i<l;i++)
        {
            x=a[i];
            x=x+temp;
            y=x%10;
            temp=x/10;
            v.pb(y);
        }
        if(temp)
            v.pb(temp);
            reverse(v.begin(),v.end());
    return v;
}

int main()
{
    //freopen ("input.txt","r",stdin);
    ll n,i;
  f[0].pb(0);
  f[1].pb(1);
  for(ll i=2;i<5002;i++)
  {
      f[i]=jog_kori(f[i-1],f[i-2]);
  }


    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is ";
        for(ll i=0;i<f[n].size();i++)
            cout<<f[n][i];
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

