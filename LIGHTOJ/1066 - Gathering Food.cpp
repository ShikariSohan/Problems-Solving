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
    #define spc printf(" ")
    #define ff first
    #define ss second
     char a[11][11];
    bool vis[11][11];
    ll dis[11][11];
    ll dr[]= {-1,0,1,0};
    ll dc[]= {0,1,0,-1};
    ll valid(ll r,ll c,ll x,ll y)
    {
        if(r>=0 && r<x && c>=0 && c<y)
            return 1;
        else
            return 0;
    }
    ll bfs(ll x,ll y,ll n,ll m,char cc)
    {
        queue<pair<ll,ll>>q;
        q.push({x,y});
        vis[x][y]=1;
        dis[x][y]=0;
        while(!q.empty())
        {
            ll l,r;
            l=q.front().first;
            r=q.front().second;
            q.pop();
            if(a[l][r]==cc)
                return dis[l][r];
            for(int i=0; i<4; i++)
            {
                x=l+dr[i];
                y=r+dc[i];
                if(valid(x,y,n,m))
                {
                    if(!vis[x][y])
                    {
                        if(a[x][y]=='.'||a[x][y]==cc)
                        {
                            vis[x][y]=1;
                            q.push({x,y});
                            dis[x][y]=dis[l][r]+1;
                        }
                    }
                }
            }
        }
        return -1;
    }
    vector<pair<char,pair<ll,ll> > > v;
    int main()
    {
      //  freopen ("input.txt","r",stdin);
      // freopen ("output.txt","w",stdout);

          tin
          {
              ll n;
              cin>>n;
              v.clear();
              for(ll i=0;i<n;i++)
              for(ll j=0;j<n;j++)
                {
                    cin>>a[i][j];
                    if(a[i][j]!='.'&&a[i][j]!='#')
                      v.pb({a[i][j],{i,j}});
                }
                sort(v.begin(),v.end());
                ll yo=v.size();
                ll k=0,x;
                bool ok=true;
                for(ll i=0;i<yo-1;i++)
                {
                    memset(vis,0,sizeof(vis));
                    memset(dis,0,sizeof(dis));
                    //cout<<v[i+1].ff<<ses;
                    x=bfs(v[i].ss.ff,v[i].ss.ss,n,n,v[i+1].ff);
                   // cout<<x<<ses;
                    if(x==-1)
                    {
                        ok=false;
                        break;
                    }
                    k+=x;
                    a[v[i].ss.ff][v[i].ss.ss]='.';
                }
             tout;
             if(ok)
                cout<<k<<ses;
             else cout<<"Impossible"<<ses;

          }



    }

    /*
        || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
        \\ Power Is Power//2
        || I Can Do This All day ||
        // We are on a Break \\ // How you doin'? \\
        || Say My Name || ~~ || I Am The Who Knocks ||
        // I Am Ted Mosby Architect \\
        || It Is Legen --wait for it -- dary ,Legendary ||
        \\ Penny - Penny - Penny // -- Bazinga

    */


