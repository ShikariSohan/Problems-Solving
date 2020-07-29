#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front
//#define tcase ll T;cin>>T; for(ll o=1;o<=T;)
#define tout cout<<"Case "<<o<<": ";
using namespace std;
#define sz 100050
map<ll,ll>vis;
map<ll,vector<ll> >adj;
ll o=1;
void bfs(ll source, ll g)
{

    queue< pair<int,int> >q;
    int x, cost;
    q.push({source,0});
    vis[source] = 1;
    while(!q.empty())
    {
        x = q.front().first;
        cost = q.front().second;
        q.pop();
        if(cost==g)
            return;
        for (int i = 0; i<adj[x].size(); i++)
            if(!vis[ adj[x][i] ])
            {
                q.push({adj[x][i],cost+1});
                vis[ adj[x][i] ] = 1;
            }
    }
    return;
}

set<ll>se;
int main()
{
//    freopen ("input.txt","r",stdin);
//    freopen ("output.txt","w",stdout);
    while(1){ int n, m, x, y, p, q,u=0;
           cin >> n;
           se.clear();
           if(n==0)
           break;
           adj.clear();
           vis.clear();
        for (int i = 0; i<n; i++)
        {
            cin >> p >> q;
            se.insert(p);
            se.insert(q);
            adj[p].pb(q);
                adj[q].pb(p);u++;
            //cout<<u<<endl;
        }
    while(1)
   {
    cin>>x>>y;
    int d=se.size(),g=0;
    if(x==0 && y==0)
            break;
        bfs(x,y);
        for(auto &it : se)
        {
            if(vis[it]==1)
                g++;
            vis[it]=0;
        }
    tout;
    o++;
    cout<<d-g<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<"."<<endl;
    }
}
return 0;
}
