

/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
void shikariIsListening()
{
    #ifndef ONLINE_JUDGE
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    #endif
}
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return ((x/gcd(x,y))*y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100015
#define MOD 1000000007
ll tree[3*sz];

ll query(ll node, ll b, ll e, ll i,ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    ll L = node * 2;
    ll R = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(L, b, mid, i, j);
    ll p2 = query(R, mid + 1, e, i, j);
    return (p1%MOD + p2%MOD)%MOD;
}
void update(ll node, ll b, ll e,ll i,ll val)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = val;
        return;
    }
   ll L = node * 2;
    ll R = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(L, b, mid, i,val);
    update(R, mid + 1, e, i,val);
    tree[node] = (tree[L]%MOD + tree[R]%MOD)%MOD;
}
int main()
{
   shikariIsListening();
   //PaglaGhora;
   tin
   {
      vector<ll>v,v1;
      map<ll,ll>mp;
      ll n,x;
      cin>>n;
      memset(tree,0,sizeof tree);
      for(ll i=0;i<n;i++)
      {
          cin>>x;
          v.pb(x);
          v1.pb(x);
      }
      sort(all(v1));
      ll k=0;
      for(ll i=0;i<n;i++)
      {
          if(mp[v1[i]]==0)
            mp[v1[i]]=++k;
      }
      for(ll i=0;i<n;i++)
      {
          v[i]=mp[v[i]];
      }
      ll temp=0;
      for(ll i=0;i<n;i++)
      {
          temp=query(1,0,k,0,v[i])+1;
          update(1,0,k,v[i],temp);
      }
      tout;
      cout<<tree[1]<<ses;
   }

    return 0;
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~ShikariSohan~   |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \ // How you doin'? \
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \
    || It Is Legen --wait for it -- dary ,Legendary ||
    \ Penny - Penny - Penny // -- Bazinga

*/
