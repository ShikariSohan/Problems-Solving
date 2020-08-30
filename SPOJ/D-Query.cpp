
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
#define sz 30009
struct st{
    ll l,r,idx;

}query[200009];

ll k,ans[200009],sum,n,seg,a[sz],ck[1000005];

void add(ll i)
{
    ck[a[i]]++;
    if(ck[a[i]]==1)
    sum++;
}

void rem(ll i)
{
    ck[a[i]]--;
    if(ck[a[i]]==0)
    sum--;
}
bool cmp(st x,st y)
{
    ll p=x.l/seg;
    ll q=y.l/seg;
    if(p==q)
        return x.r<y.r;
    else return p<q;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
   ll n,q,u,v;
   sum=0;
   cin>>n;
   seg=sqrt(n);
   for(ll i=0;i<n;i++)
    cin>>a[i];
   cin>>q;
   for(ll i=0;i<q;i++)
   {
       cin>>u>>v;
       u--;
       v--;
       query[i].idx=i;
       query[i].l=u;
       query[i].r=v;
   }
   sort(query,query+q,cmp);
   ll L=0,R=-1;
   for(ll i=0;i<q;i++)
   {
       u=query[i].l;
       v=query[i].r;
     //  cout<<u<<"---"<<v<<" ---  "<<query[i].idx<<ses;
       while(R<v)add(++R);
       while(R>v)rem(R--);
       while(L<u)rem(L++);
       while(L>u)add(--L);
       ans[query[i].idx]=sum;
   }
    for(ll i=0;i<q;i++)
        cout<<ans[i]<<ses;




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
