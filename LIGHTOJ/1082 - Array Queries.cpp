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
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":"<<ses;
#define inf 10000098
ll arr[100009];
ll tree[3*100009];
void init(ll node ,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    ll left=2*node;
    ll right = node*2+1;
    ll mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
ll qu(ll node ,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
     return inf;
    if(b>=i && e<=j)
        return tree[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p=qu(left,b,mid,i,j);
    ll q=qu(right,mid+1,e,i,j);
    return min(p,q);

}

int main()
{
   // freopen ("input.txt","r",stdin);
   // freopen ("output.txt","w",stdout);
    tin
    {
       // memset(arr,0,sizeof(arr));
       // memset(tree,0,sizeof(tree));
        ll n,q,x,y;
        cin>>n>>q;
        for(ll i=1;i<=n;i++)
        {
           scanf("%lld",&arr[i]);
        }
        init(1,1,n);
        tout;
        while(q--)
        {
            scanf("%lld %lld",&x,&y);
            ll p=qu(1,1,n,x,y);
            printf("%lld\n",p);
        }

    }

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

