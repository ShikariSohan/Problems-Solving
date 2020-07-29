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
ll a[100050];
ll fq[100050];
ll tree[400050];
unordered_map<ll,ll>mp,idx;
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node]=fq[b];
        return;
    }
    ll mid=(b+e)/2;
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    tree[node]=max(tree[node*2],tree[node*2+1]);
}
ll src(ll node,ll b,ll e,ll i,ll j)
{
     if (i > e || j < b)
        return -20000000;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = src(Left, b, mid, i, j);
    ll p2 = src(Right, mid + 1, e, i, j);
    return max(p1,p2);
}
int main()
{

 /*
 8 12
 47 72 89 96 97 97 98 99
 1 8
 */
    ll x,y,n,q;
    while(420)
    {
        in(n);
        if(n==0)
            return 0;
        else
        {
            mp.clear();
            idx.clear();
            memset(a,0,sizeof(a));
            memset(fq,0,sizeof(fq));
            memset(tree,0,sizeof(tree));
            in(q);
            for(ll i=0; i<n; i++)
            {
                in(a[i]);
                if(mp[a[i]]==0)
                {
                    idx[a[i]]=i;
                }
                mp[a[i]]++;
            }
            for(ll i=0; i<n; i++)
            {
                fq[i]=mp[a[i]];
                //cout<<i<<" "<<fq[i]<<" "<<idx[a[i]]<<ses;
            }
            build(1,0,n-1);
            ll i,j;

            while(q--)
            {
                in(i);
                in(j);
                i--;
                j--;
                x=fq[i];
                y=fq[j];
                if(a[i]==a[j])
                {
                    out(j-i+1);
                }
                else
                {
                    ll l=x-i+idx[a[i]];
                    ll r=j-idx[a[j]]+1;
                    x=l+i;
                    y=idx[a[j]]-1;
                   // cout<<x<<" "<<y<<" "<<l<<" "<<r<<" "<<src(1,0,n-1,x,y)<<ses;
                    l=max(l,r);
                    if(x<=y && x>i && y<j)
                         {
                             out(max(l,src(1,0,n-1,x,y)));
                         }
                    else out(l);
                }


            }
        }
    }
    return 0;
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
