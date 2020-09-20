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
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
vector<ll>v[27];
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
     string s,x;
     ll n,p;
     cin>>n;
     cin>>s;
     for(ll i=0;i<n;i++)
     {
         p=s[i]-'a';
         v[p].pb(i);
     }
     ll q,l,a,b,m;
     bool ok;
    cin>>q;
    while(q--)
    {
        cin>>x;
        l=x.size();
        a=0;
        ok=true;
        for(ll i=0;i<l;i++)
        {
            b=x[i]-'a';
            m=lower_bound(v[b].begin(),v[b].end(),a)-v[b].begin();
            if(lower_bound(v[b].begin(),v[b].end(),a)==v[b].end())
               {
                    ok=false;
                    break;
               }
            a=v[b][m]+1;
        }
        if(ok)
            cout<<"YES"<<ses;
        else cout<<"NO"<<ses;
    }



    return 0;
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~ShikariSohan~   |
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
