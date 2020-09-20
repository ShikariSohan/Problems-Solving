
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
void shikariIsListening()
{
    #ifndef ONLINE_JUDGE
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    #endif
}
#define pi 2*acos(0.0)
#define inf 2147483600
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%d",&x);
#define out(x) printf("%d\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
#define tin int T;cin>>T; for(int o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":\n";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 50009
vector<pair<int,int>>adj[sz];
int sp[sz][27];
int sd[sz][27];
int par[sz];
int parent[sz];
bool vis[sz];
int level[sz];
int cost[sz];
vector<pair<int,pair<int,int>>>edge;
int n,lg;
void dfs(int node,int p,int lvl)
{
    vis[node]=true;
    par[node]=p;

    level[node]=lvl;
    for(int i=0;i<adj[node].size();i++)
    {
        int x=adj[node][i].fs;
        if(!vis[x])
           {
               dfs(x,node,lvl+1);
               cost[x]=adj[node][i].sc;
           }
    }
}
void preProcess()
{
    sp[0][0]=-1;
    sd[0][0]=0;
    for(int i=1;i<n;i++)
    {
        sp[i][0]=par[i];
        sd[i][0]=cost[i];
    }
    for(int k=1;(1<<k)<n;k++)
    {
        lg=k;
        for(int i=0;i<n;i++)
        {
            if(sp[i][k-1]!=-1)
            {

                sp[i][k]=sp[sp[i][k-1]][k-1];
                sd[i][k]=max(sd[i][k-1],sd[sp[i][k-1]][k-1]);
            }
        }
    }

}
int query(int a,int b)
{
    if(level[a]<level[b])
        swap(a,b);
    int mx=0;
    int k=level[a]-level[b];
    if(k>0)
    for (int i=0;i<=lg;i++) {
            if (k & (1 << i)) {
                mx=max(mx,sd[a][i]);
                a=sp[a][i];
            }
    }
    if(a==b)
    return mx;
    for(int i=lg;i>=0;i--)
    {
        if(sp[a][i]!=-1&&sp[a][i]!=sp[b][i])
        {

            mx=max(mx,max(sd[a][i],sd[b][i]));
            a=sp[a][i];
            b=sp[b][i];
        }
    }

    mx=max(mx,cost[a]);
    mx=max(mx,cost[b]);

    return mx;
}
int find_par(int x)
{
    if(x==parent[x])
        return x;
    return parent[x]=find_par(parent[x]);
}
int main()
{
   shikariIsListening();
   //PaglaGhora;
   int u,v,c,m;
   tin
   {

       in(n);
       in(m);
       for(int i=1;i<=m;i++)
       {
           in(v);
           in(u);
           in(c);
           u--;
           v--;
           edge.pb({c,{u,v}});
       }
       sort(all(edge));
       for(int i=0;i<=n;i++)
        parent[i]=i;
       for(int i=0;i<m;i++)
       {
           u=edge[i].sc.fs;
           c=edge[i].fs;
           v=edge[i].sc.sc;
           if(find_par(v)!=find_par(u))
           {
               parent[find_par(v)]=find_par(u);
               //cout<<u<<" "<<v<<" "<<c<<ses;
               adj[u].pb({v,c});
               adj[v].pb({u,c});
           }
       }
       dfs(0,-1,0);
       preProcess();
       in(m);
       tout;
       while(m--)
       {

           in(u);
           in(v);
           u--;
           v--;
           int x=query(u,v);
           cout<<x<<ses;
       }
       edge.clear();
       for(int i=0;i<n;i++)
        {
            adj[i].clear();
            vis[i]=0;
            cost[i]=0;
            level[i]=0;
        }
        memset(sp,-1,sizeof(sp));
        memset(sd,-1,sizeof(sd));
   }

    return 0;
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~ShikariSohan~   |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \ // How you doin'? \
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \
    || It Is Legen --wait for it -- dary ,Legendary ||
    \ Penny - Penny - Penny // -- Bazinga

*/
