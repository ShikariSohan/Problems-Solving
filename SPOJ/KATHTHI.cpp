    /*


                     """Bismillahir Rahmanur Rahim"""
    */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define inf 922337203470075000
    #define pb push_back
    #define pf push_front
    const ll sz = 1000001;
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
    #define in(x) scanf("%lld",&x);
    #define out(x) printf("%lld\n",x);
    #define stm istringstream
    #define all(x) x.begin(),x.end()
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y)
    {
        return (x*y)/gcd(x,y);
    }
    #define tin ll xxx;cin>>xxx; for(ll o=1;o<=xxx;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    char a[1007][1007];
    ll dis[1007][1007];
    ll n,m;
    ll dr[]={-1,1,0,0};
    ll dc[]={0,0,-1,1};
    bool ck(ll x,ll y)
    {
        if(x>=0 && x<n && y>=0 && y<m)
            return true;
        else return false;
    }
    ll bfs()
    {
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
               dis[i][j]=10545474887;
        deque<pair<ll,ll>>q;
        dis[0][0]=0;
        q.push_front({0,0});
        while(!q.empty())
        {
            ll x,y;
            x=q.front().first;
            y=q.front().second;
            if(x==n-1&&y==m-1)
                return dis[x][y];
            q.pop_front();
            for(ll i=0;i<4;i++)
            {
                ll x1=x+dr[i];
                ll y1=y+dc[i];
                if(ck(x1,y1))
                {
                    if(a[x][y]==a[x1][y1])
                    {
                        if(dis[x][y]+0<dis[x1][y1])
                        {
                            dis[x1][y1]=dis[x][y];
                            q.push_front({x1,y1});
                        }
                    }
                    else
                    {
                        if(dis[x][y]+1<dis[x1][y1])
                        {
                            dis[x1][y1]=dis[x][y]+1;
                            q.push_back({x1,y1});
                        }
                    }
                }
            }
        }
    }
    int main()
    {
      tin
      {
          cin>>n>>m;
          for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
            cin>>a[i][j];
          cout<<bfs()<<ses;
      }
    }

    /*   --------------------
        |      ~SOHAN~       |
        |   ~Chandler68~     |
         ----------------n----
        || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
        \\ Power Is Power//
        || I Can Do This All day ||
        // We are on a Break \\ // How you doin'? \\
        || Say My Name || ~~ || I Am The Who Knocks ||
        // I Am Ted Mosby Architect \\
        || It Is Legen --wait for it -- dary ,Legendary ||
        \\ Penny - Penny - Penny // -- Bazinga

    */
