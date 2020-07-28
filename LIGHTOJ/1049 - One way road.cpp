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
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define SZ 104
ll vis[SZ],cost[SZ][SZ];
vector<ll>adj[SZ];
void init()
{
    for(ll i=0;i<SZ;i++)
    {
        adj[i].clear();
        vis[i]=0;
    }
    memset(cost,0,sizeof(cost));
}
ll res=0;
void dfs(ll x)
{
    if(vis[x]==1)
        return;
    vis[x]=1;
    bool ok=false;
    for(ll i=0;i<adj[x].size();i++)
    {
        if(!vis[adj[x][i]])
        {
            dfs(adj[x][i]);
            ok=true;
            res+=cost[x][adj[x][i]];
        }
    }
    if(!ok)
        res+=cost[x][1];
    vis[x]=2;
}
int main()
{
  // freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
  tin
  {
      init();
      ll n;
      cin>>n;
      ll u,v,k;
      ll s=0;
      res=0;
      for(ll i=0;i<n;i++)
      {
          cin>>u>>v>>k;
          adj[u].pb(v);
          adj[v].pb(u);
          cost[u][v]=k;
          cost[v][u]=0;
          s+=k;
      }
      dfs(1);
      tout;
     cout<<min(res,s-res)<<ses;

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
