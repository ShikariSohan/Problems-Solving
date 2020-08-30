
    /*


                     """Bismillahir Rahmanur Rahim"""

    */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define pb push_back
    #define pf push_front
    #define mp make_pair
    #define ses '\n'
    #define stm istringstream
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define hur cout<<"Bal Amar"<<ses;
    #define sz 1000050
    using namespace std;

    vector <ll> adj[sz];
    ll vis[sz];

     ll bfs(ll source,ll yo,ll k)
    {
        queue< pair<ll,ll> >q;
        ll x, cost;
        q.push({source,0});
        if(vis[source])
            return -1;
        vis[source] = k;
        while(!q.empty())
        {
            x = q.front().first;
            cost = q.front().second;
            q.pop();
            if(cost==yo) return 1;
            for (int i = 0; i<adj[x].size(); i++)
                if(!vis[ adj[x][i] ])
                {
                    q.push({adj[x][i],cost+1});
                    vis[ adj[x][i] ] = k;
                }
        else if(vis[ adj[x][i] ]!=k)
               return -1;
        }
    }

    int main()
    {

          ll n,m,u,v,t;
       tin
       {

           cin>>m>>n>>t;
             for(int i=1;i<=m;i++)
            adj[i].clear(),vis[i]=0;
           for(ll i=0;i<n;i++)
           {
               cin>>u>>v;
               adj[u].pb(v);
               adj[v].pb(u);
           }
           bool yo=true;
           ll p,q,k=0;
           for(int i=0;i<t;i++)
           {
               cin>>p>>q;
               k++;
               ll x=bfs(p,q,k);
               if(x==-1)
                yo=false;
           }
           if(yo)
            {
            for(int i=1;i<=m;i++)
            if(vis[i]==0)
              yo=false;
            }
           if(yo)
            cout<<"Yes"<<ses;
           else cout<<"No"<<ses;
       }
    }
