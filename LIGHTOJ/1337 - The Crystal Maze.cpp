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
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<":"<<ses;
    /// dot=1, crystal =2; bera =3
    ll a[510][510],vis[510][510],dis[250000];
    ll dr[]={-1,0,1,0};
    ll dc[]={0,1,0,-1};
    ll valid(ll r,ll c,ll x,ll y)
    {
        if(r>=0 && r<x && c>=0 && c<y)
            return 1;
        else return 0;
    }
    void init()
    {
        for(int i=0;i<510;i++)
            for(int j=0;j<510;j++)
        {
            a[i][j]=0;
            vis[i][j]=0;
        }
        memset(dis,0,sizeof(dis));
    }
    ll xx=0;
    ll bfs(ll e,ll b,ll x,ll y)
    {
        queue<pair<ll,ll> >q;
        ll k=0;
        q.push({e,b});
        if(a[e][b]==2)
            k++;
        vis[e][b]=1;
        while(!q.empty())
        {
            ll p,fru;
         //    puts("fuck");
            p=q.front().first;
            fru=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                ll r=p+dr[i];
                ll c=fru+dc[i];
                if(valid(r,c,x,y))
                {
                    if(vis[r][c]==0)
                    {
                       if(a[r][c]==2)
                       k++;
                   //    cout<<k<<" y"<<ses;
                        if(a[r][c]==1||a[r][c]==2)
                        {
                            vis[r][c]=xx;
                            q.push({r,c});
                        }
                    }
                }
            }
        }
        return k;
    }

    int main()
    {
    //    freopen ("input.txt","r",stdin);
    //    freopen ("output.txt","w",stdout);
        tin
        {
            ll m,n,i,j,q;
            init();
            xx=0;
            char x;
            cin>>m>>n>>q;
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
               {
                   cin>>x;
                   if(x=='.')
                    a[i][j]=1;
                   else if(x=='#')
                    a[i][j]=3;
                   else if(x=='C')
                    a[i][j]=2;
               }tout;
               for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                {
                    if(vis[i][j]==0)
                        {
                            xx++;
                            ll ans=bfs(i,j,m,n);
                            dis[xx]=ans;
                        }
                }
                 while(q--)
                 {
                     cin>>i>>j;
                     printf("%lld\n",dis[vis[i-1][j-1]]);
                 }

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




