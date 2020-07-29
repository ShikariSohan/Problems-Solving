
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
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
struct node
{
    ll k;
    bool mark;
    node* a[2];
    node()
    {
      k=1;
      mark=false;
      a[0]=NULL;
      a[1]=NULL;

    }
}*root;
void ins(string s)
{
    node* cur=root;
    ll x=s.size(),m;
    for(ll i=0;i<x;i++)
    {
        m=s[i]-'0';
        if(cur->a[m]==NULL)
        {
            cur->a[m]=new node();
            cur=cur->a[m];
        }
        else
        {
            cur=cur->a[m];
            cur->k++;

        }
        //cout<<cur->k<<ses;
    }
}
ll m=0;
void dfs(node* cur,ll x)
{
    m=max(((cur->k)*x),m);
    if(cur->a[0])
        dfs(cur->a[0],x+1);
    if(cur->a[1])
        dfs(cur->a[1],x+1);
}
void del(node* cur)
{
    if(cur->a[0])
        del(cur->a[0]);
    if(cur->a[1])
        del(cur->a[1]);
    delete cur;
}
int main()
{
   // freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    string s;
    tin
    {
         root= new node();
         ll x;
         in(x);
         while(x--)
         {
             cin>>s;
             ins(s);
         }
         m=0;
         dfs(root,0);
         cout<<m<<ses;
         del(root);
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

