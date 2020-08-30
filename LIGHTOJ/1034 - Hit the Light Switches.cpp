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
    ll vis[100000];
    vector<ll>adj[100000];
    void khelo()
    {
        for(ll i=0;i<100000;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
    }
    stack<ll>st;
    void dfs(ll x)
    {
        vis[x]=1;
        for(ll i=0;i<adj[x].size();i++)
        {
            if(!vis[adj[x][i]])
            {
                dfs(adj[x][i]);
            }
        }
        vis[x]=2;
        st.push(x);
    }
    void dfs11(ll x)
    {
        vis[x]=1;
        for(ll i=0;i<adj[x].size();i++)
        {
            if(!vis[adj[x][i]])
            {
                dfs(adj[x][i]);
            }
        }
        vis[x]=2;
    }
    int main()
    {
      // freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);

       tin
       {

          khelo();
          ll m,n,u,v,k=0;
          cin>>n>>m;

          while(m--)
          {

              cin>>u>>v;
              adj[u].pb(v);
          }

           {

           }
          for(ll i=1;i<=n;i++)
          {
              if(!vis[i])
              {
                  dfs(i);

              }
          }
          memset(vis,0,sizeof(vis));
          while(!st.empty())
          {
              if(vis[st.top()]==0)
               {
                    dfs11(st.top());
                    k++;
               }
            st.pop();
          }
          tout;
          cout<<k<<ses;

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



