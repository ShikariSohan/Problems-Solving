

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
#define ll int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%d",&x);
#define out(x) printf("%d\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":\n";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100015
ll a[504][504];
ll n;
ll tree[504][3*504];
void init(ll idx,ll node, ll b, ll e)
{
    if (b == e) {
        tree[idx][node] = a[idx][b];
        return;
    }
    ll L = node * 2;
    ll R = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(idx,L, b, mid);
    init(idx,R, mid + 1, e);
    tree[idx][node] = max(tree[idx][L],tree[idx][R]);
}
ll query(ll idx,ll node, ll b, ll e, ll i,ll j)
{
    if (i > e || j < b)
        return -58;
    if (b >= i && e <= j)
        return tree[idx][node];
    ll L = node * 2;
    ll R = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(idx,L, b, mid, i, j);
    ll p2 = query(idx,R, mid + 1, e, i, j);
    return max(p1,p2);
}
int main()
{
    shikariIsListening();
    //PaglaGhora;+
    tin
    {
        in(n);
        ll m;
        ll I,J,S;
        in(m);
        for(ll i=0; i<n; i++)
            for(ll j=0; j<n; j++)
                in(a[i][j]);

        tout;
        for(ll i=0;i<n;i++)
            init(i,1,0,n-1);
        for(ll i=0; i<m; i++)
        {
            in(I);
            in(J);
            in(S);
            I--;
            J--;
            S--;
            ll ans=-55;
            for(ll j=I; j<=I+S; j++)
            {

                ll yo=query(j,1,0,n-1,J,J+S);
                ans=max(yo,ans);
            }
            out(ans);
        }
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
