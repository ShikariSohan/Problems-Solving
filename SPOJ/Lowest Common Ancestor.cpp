

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
#define sz 1015
ll n,m,lg;
bool vis[sz];
ll par[sz];
ll level[sz];
ll sp[sz][42];
vector<ll>adj[sz];
void dfs(ll n,ll p,ll x)
{
    par[n]=p;
    level[n]=x;
    vis[n]=true;
    for(auto &it:adj[n])
    {
      if(!vis[it])
        dfs(it,n,x+1);
    }
}
void preProcess()
{
    memset(sp,-1,sizeof(sp));
    for(ll i=0;i<n;i++)
    {
        sp[i][0]=par[i];
    }
    for(ll k=1;(1<<k)<n;k++)
    {
        lg=k;
        for(ll i=0;i<n;i++)
        {
            if(sp[i][k-1]!=-1)
            sp[i][k]=sp[sp[i][k-1]][k-1];
        }
    }
}
ll kthAnchestor(ll n,ll k)
{
    if(k==0)
    return n;
    for (ll i=0;i<=lg;i++) {
            if (k & (1 << i)) {
                n=sp[n][i];
                if(n==-1)
                    return -1;
            }
    }
    return n;
}
ll LCA(ll a,ll b)
{
    if(level[a]>level[b])
        swap(a,b);

    b=kthAnchestor(b,level[b]-level[a]);
    if(b==a)
        return a;

    for(ll i=lg;i>=0;i--)
    {
        if(sp[a][i]!=-1&&sp[a][i]!=sp[b][i])
        {
            a=sp[a][i];
            b=sp[b][i];
        }
    }
    return par[a];
}
void init()
{
    memset(vis,0,sizeof(vis));
    memset(par,0,sizeof(par));
    memset(sp,-1,sizeof(sp));
    memset(level,0,sizeof(level));
    for(ll i=0;i<n+2;i++)
        adj[i].clear();
//        adj[i].clear();
}
int main()
{
    // shikariIsListening();
  tin{
    in(n);
    init();
    ll u,v;
    for(ll i=0;i<n;i++)
    {
       ll x;
       in(x);
       while(x--){
            in(u);
       u--;
        adj[i].pb(u);
        adj[u].pb(i);
       }
    }
    dfs(0,-1,0);
    preProcess();
//    for(ll i=0;i<n;i++)
//    {
//        for(ll j=0;j<=lg;j++)
//            cout<<sp[i][j]<<" ";
//        cout<<ses;
//    }
    in(m);
    tout;
    for(ll i=0;i<m;i++)
    {
        in(u);
        in(v);
        u--;
        v--;
        out(LCA(u,v)+1);

    }
  }
    return 0;
}
/*
14 11
0 1
0 2
1 3
1 4
2 5
2 6
5 7
7 8
8 9
10 11
10 12
10 13
6 10

8 7
0 1
0 2
1 3
1 4
2 5
5 6
6 7
*/
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
