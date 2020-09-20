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
#define M 3000050
bool marked[M];

bool isPrime(ll n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}
vector<ll>v;
void sieve()
{
  for (ll i = 3; i * i <= M; i += 2) {
    if (marked[i] == false) {
      for (ll j = i * i; j <= M; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
ll tree[4000050],a[3000050];
void init(ll node,ll b,ll e)
{
    if(b==e)
    {
        if(isPrime(a[b]))
            tree[node]=1;
        else tree[node]=0;
        return;
    }
    ll mid=(b+e)/2;
    ll l=node*2;
    ll r=node*2+1;
    init(l,b,mid);
    init(r,mid+1,e);
    tree[node]=tree[l]+tree[r];
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(ll node, ll b, ll e, ll i, ll newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        if(isPrime(newvalue))
            tree[node]=1;
        else tree[node]=0;
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
    sieve();
    ll n;
    in(n);
    for(ll i=0;i<n;i++)
    {
        in(a[i]);
    }
    init(1,0,n-1);

    ll m,x,y,z,s;
    in(m);
    while(m--)
    {
        in(x);
        if(x==1)
        {
            in(y);
            in(z);
            s=query(1,0,n-1,y-1,z-1);
            out(s);
        }
        else
        {
            in(y);
            in(z);
            update(1,0,n-1,y-1,z);
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
