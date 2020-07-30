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
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define stm istringstream
#define sob(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":"<<ses;
#define M 100100
char a[M],x[1];
struct Tre
{
    ll sum ;
    ll prob;
} tree[M*4];
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node].sum=(a[b]-'0');
        tree[node].prob=0;
        return;
    }
    ll lef=2*node;
    ll rig=lef+1;
    ll mid=(b+e)/2;
    build(lef,b,mid);
    build(rig,mid+1,e);
    tree[node].sum=tree[lef].sum^tree[rig].sum;
}
ll query(ll node,ll b,ll e,ll i,ll j,ll carry)
{
    if(b>j || e<i)
        return 0;
    if(b>=i && e<=j)
        return tree[node].sum^carry;
    ll lef=2*node;
    ll rig=lef+1;
    ll mid=(b+e)/2;
    ll x= query(lef,b,mid,i,j,carry^tree[node].prob);
    ll y=  query(rig,mid+1,e,i,j,carry^tree[node].prob);
    return x^y;
}
void update(ll node,ll b,ll e,ll i,ll j,ll val)
{
    if(b>j || e<i)
        return;
    if(b>=i && e<=j)
    {
        tree[node].sum^=1;
        tree[node].prob^=1;
        return;
    }
    ll lef=2*node;
    ll rig=lef+1;
    ll mid=(b+e)/2;
    update(lef,b,mid,i,j,val);
    update(rig,mid+1,e,i,j,val);
    tree[node].sum=tree[lef].sum^tree[rig].sum^tree[node].prob;
}
int main()
{    //freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    tin
    {
         ll n,l,i,j;
         scanf("%s",a);
        l=strlen(a);
        for(ll v=0;v<4*l;v++)
        {
            tree[v].sum=0;
            tree[v].prob=0;
        }
        build(1,0,l-1);
        scanf("%lld",&n);
        tout;
        while(n--)
        {
          scanf("%s",x);
            if(x[0]=='I')
            {
                scanf("%lld %lld",&i,&j);
                update(1,0,l-1,i-1,j-1,0);
            }
            else {
                scanf("%lld",&i);
                cout<<query(1,0,l-1,i-1,i-1,0)<<ses;
            }
        }

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
