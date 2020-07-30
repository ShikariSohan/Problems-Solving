
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
const ll sz = 109;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
vector <ll> adj[sz];
ll vis[sz],dis[sz],dis2[sz];

void bfs(ll source,ll dis[])
{
    memset(vis,0,sizeof(vis));
    queue< ll>q;
    ll x;
    q.push(source);
    vis[source] = 1;
    dis[source]=0;
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        for (int i = 0; i<adj[x].size(); i++)
            if(!vis[ adj[x][i] ])
            {
                q.push(adj[x][i]);
                dis[adj[x][i]]=dis[x]+1;
                vis[ adj[x][i] ] = 1;
            }
    }

}


int main()
{
   // freopen ("input.txt","r",stdin);
   // freopen ("output.txt","w",stdout);
    tin
    {
        ll n, m, x, y, p, q;
        for(int i=0;i<sz;i++)
            adj[i].clear();
            memset(dis,0,sizeof(dis));
            memset(dis2,0,sizeof(dis2));
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> p >> q;
        adj[p].pb(q);
        adj[q].pb(p);
    }
     cin >> x >> y;
     bfs(x,dis);
     bfs(y,dis2);
     ll a=0,b;
     for(int i=0;i<sz;i++)
     {
         b=dis[i]+dis2[i];
         a=max(b,a);
     }
    tout; cout<<a<<ses;
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
