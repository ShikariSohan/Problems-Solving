    /*


                     """Bismillahir Rahmanur Rahim"""

    */
    #include<bits/stdc++.h>
    #include<vector>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define ll long long int
    #define pb push_back
    #define pf push_front
    const ll sz = 1000001;
    #define mp make_pair
    #define ses '\n'
    #define stm istringstream
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<":"<<ses;
    vector<pair<ll,pair<ll,ll> > > ad;
    vector<pair<ll,pair<ll,ll> > > ans;
    vector<pair<ll,ll> > adj[100010*2];
    ll parent[100010*2];
    ll r[100010*2];
    ll dis[100010*2];
    ll vis[100010*2];
    ll find_rep(ll node)
    {
        if(node==parent[node]) return node;

        return parent[node]=find_rep(parent[node]);
    }
    void union_set(ll a, ll b)
    {
        ll x=find_rep(a);
        ll y=find_rep(b);

        if(x!=y)
        {
            if(r[x]<r[y]) swap(x,y);

            parent[y]=x;

            if(r[a]==r[b]) ++r[a];
        }
    }
    void bfs(ll source)
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
                    dis[node]=max(dis[x],ct);
                }
                }
        }
    }
    int main()
    {
      tin
        {
           ad.clear();
           ans.clear();
           tout;
           for(int i=0;i<100010*2;i++)
            adj[i].clear();
           ll m,n,u,v,w;
           cin>>m>>n;
           for(int i=0;i<m;i++)
            parent[i]=i,r[i]=1;
           for(int i=0;i<n;i++)
           {
               cin>>u>>v>>w;
               ad.pb({w,{u,v}});
           }
           sort(ad.begin(),ad.end());
          for(int i=0;i<n;++i)
         {
            ll x=ad[i].second.first;
            ll y=ad[i].second.second;
            ll c=ad[i].first;
            if(find_rep(x)!=find_rep(y))
            {
                ans.pb(ad[i]);
                union_set(x,y);
            }
         }
         for(int i=0;i<ans.size();i++)
         {
            ll x=ans[i].second.first;
            ll y=ans[i].second.second;
            ll c=ans[i].first;
            adj[x].pb({y,c});
            adj[y].pb({x,c});
         }
         ll bfss;
         cin>>bfss;
         bfs(bfss);
         for(int i=0;i<m;i++)
         {
             if(dis[i])
             cout<<dis[i]<<ses;
             else if(i==bfss)
                cout<<"0"<<ses;
             else cout<<"Impossible"<<ses;
         }

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


