
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
#define sz 10050
ll n,m,lg;
bool vis[sz];
ll par[sz];
ll level[sz];
ll cost[sz];
ll sp[sz][42];
vector<ll>adj[sz];
vector<ll>cs[sz];
void init()
{
    for(ll i=0; i<=n; i++)
    {
        cost[i]=0;
        level[i]=0;
        adj[i].clear();
        cs[i].clear();
        par[i]=0;
        vis[i]=false;
    }
}
void dfs(ll n,ll p,ll x,ll y)
{
    par[n]=p;
    level[n]=x;
    cost[n]=y;
    vis[n]=true;
    for(ll i=0; i<adj[n].size(); i++)
    {
        ll it=adj[n][i];
        if(!vis[it])
            dfs(it,n,x+1,y+cs[n][i]);
    }
}
void preProcess()
{
    memset(sp,-1,sizeof(sp));
    for(ll i=0; i<n; i++)
    {
        sp[i][0]=par[i];
    }
    for(ll k=1; (1<<k)<n; k++)
    {
        lg=k;
        for(ll i=0; i<n; i++)
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
    for (ll i=0; i<=lg; i++)
    {
        if (k & (1 << i))
        {
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

    for(ll i=lg; i>=0; i--)
    {
        if(sp[a][i]!=-1&&sp[a][i]!=sp[b][i])
        {
            a=sp[a][i];
            b=sp[b][i];
        }
    }
    return par[a];
}
int main()
{
    // shikariIsListening();
    tin
    {
        in(n);
        ll u,v,c;
        init();
        for(ll i=0; i<n-1; i++)
        {
            in(u);
            in(v);
            in(c);
            u--;
            v--;

            adj[u].pb(v);
            cs[u].pb(c);
            adj[v].pb(u);
            cs[v].pb(c);
        }
        dfs(0,-1,0,0);

        preProcess();

        string s;
        while(1)
        {
            cin>>s;
            if(s=="DONE")
                break;
            if(s=="DIST")
            {
                in(u);
                in(v);
                u--;
                v--;
                ll x=LCA(u,v);
                ll ans=cost[u]+cost[v]-cost[x]-cost[x];
                cout<<ans<<ses;
            }
            else
            {
                cin>>u>>v>>c;
                u--;
                v--;
                c--;
                ll x=LCA(u,v);
                ll p=level[u]-level[x];
                ll q=level[v]-level[x];

                if(c<=p)
                    cout<<kthAnchestor(u,c)+1<<ses;
                else
                {
                    ll ans=level[u]+level[v]-level[x]-level[x];

                    cout<<kthAnchestor(v,ans-c)+1<<ses;
                }

            }
        }
        cout<<ses;
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
