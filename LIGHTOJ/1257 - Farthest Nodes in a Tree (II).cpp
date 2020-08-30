    #include <bits/stdc++.h>
    #define sz 100000
    #define ll long long int
    #define pb push_back
    #define pf push_front
    #define tcase ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<":";
    #define ses '\n'
    using namespace std;
    #define fuck 30020
    vector <pair<ll,ll> > adj[fuck];
    ll vis[fuck];
    ll dis[fuck];
    ll dis1[fuck];
    void bfs(int source,ll dis[])
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

         for(ll i=0;i<fuck;i++)
            adj[i].clear();
         ll node=0,n,x,y,cost,costq=-1;
         cin>>n;
         for(ll i=0;i<n-1;i++)
         {
             cin>>x>>y>>cost;
             adj[x].pb({y,cost});
             adj[y].pb({x,cost});
         }
        bfs(0,dis);
         ll k=-1,yo;
        for(int i=0;i<n;i++)
            {
                if(k<dis[i])
                {
                    yo=i; k=dis[i];
                }
            }
        bfs(yo,dis);k=-1;ll p;
        for(int i=0;i<n;i++)
        {
                if(k<dis[i])
                {
                k=dis[i];
                p=i;
                }
        }
        bfs(p,dis1);tout;puts("");
         for(int i=0;i<n;i++)
            cout<<max(dis[i],dis1[i])<<ses;

       }

    }


