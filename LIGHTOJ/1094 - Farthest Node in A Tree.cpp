#include <bits/stdc++.h>
#define sz 100000
#define ll long long int
#define pb push_back
#define pf push_front
#define tcase ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
using namespace std;
#define fun 30020
vector <pair<ll,ll> > adj[fun];
int vis[fun];
int dis[fun];
void bfs(int source)
{
     memset(dis,0,sizeof(dis));
     memset(vis,0,sizeof(vis));
    queue<ll>q;
    ll x; dis[source]=0;
    q.push(source);
    vis[source] = 1;
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        for (int i = 0; i<adj[x].size(); i++)
            {
                ll node=adj[x][i].first;
                ll ct=adj[x][i].second;
                if(!vis[node])
            {
                q.push(node);
                vis[ node ] = 1;
                dis[node]=dis[x]+ct;
            }
            }
    }
}

int main()
{
   //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
   tcase
   {

     for(ll i=0;i<fun;i++)
        adj[i].clear();
     ll node=0,n,x,y,cost,costq=-1;
     cin>>n;
     for(ll i=0;i<n-1;i++)
     {
         cin>>x>>y>>cost;
         node=max(node,x);
         node=max(node,y);
         adj[x].pb({y,cost});
         adj[y].pb({x,cost});
     }
    bfs(0);
     ll k=-1,yo;
    for(int i=0;i<fun;i++)
    {
        if(adj[i].size())
        {
            if(k<dis[i])
            {
                yo=i; k=dis[i];
            }
        }
    }
    bfs(yo);k=-1;
    for(int i=0;i<fun;i++)
    {
        if(adj[i].size())
        {
            if(k<dis[i])
            {
            k=dis[i];
            }
        }
    }
    tout;cout<<k<<endl;
   }

}
