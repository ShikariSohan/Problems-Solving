/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pf push_front
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
priority_queue<ll,vector<ll>,greater<ll> >q;
ll dis[100015],par[100015],col[100015];
#define inf LLONG_MAX
vector<pair<ll,ll> >adj[100015];
ll n;
void dij()
{
    q.push(1);
    dis[1]=0;
    ll x,node,cost;
    while(!q.empty())
    {
        x=q.top();
        q.pop();
//        if(col[x]==1)continue;
//        col[x]=1;
        for(int i=0;i<adj[x].size();i++)
        {
            node=adj[x][i].first;
            cost=adj[x][i].second;
            //cout<<"node "<<" cost "<<node<<" "<<cost<<ses;
            if((dis[x]+cost<dis[node]))
            {
                dis[node]=dis[x]+cost;
                q.push(node);
                par[node]=x;
            }

        }

    }
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

   tin
   {
    ll m,v,u,w;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<=n;i++)
        dis[i]=inf,adj[i].clear();
    for(ll i=0;i<m;i++)
    {
        scanf("%lld %lld %lld",&u,&v,&w);
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
     for(int i=0;i<=n;i++)
        dis[i]=inf;

        dij();
        tout;
        if(dis[n]!=inf)
        cout<<dis[n]<<ses;
        else cout<<"Impossible"<<ses;
}}
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
