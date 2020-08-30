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
vector<ll>adj[1020],frnd;
bool vis[1020];
ll cnt[1020],n,k,m,p;
void init()
{
    for(ll i=0;i<1020;i++)
    {
        vis[i]=false;
        cnt[i]=0;
        adj[i].clear();
    }
    frnd.clear();
}
void dfs(ll x)
{
     vis[x]=1;
     cnt[x]++;
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
  //  freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

      tin
      {
          ll u,v;
          init();
         in(k);in(n);in(m);
         for(ll i=0;i<k;i++)
         {
             in(p);
             frnd.pb(p);
         }
         for(ll i=0;i<m;i++)
         {
             in(u);
             in(v);
             adj[u].pb(v);
         }
         for(ll i=0;i<k;i++)
         {
             memset(vis,0,sizeof(vis));
             dfs(frnd[i]);
         }
         ll ans=0;
         for(ll i=1;i<=n;++i)
         {
             if(cnt[i]==k)
                ans++;
         }
         tout;
         cout<<ans<<ses;
      }



}

/*
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/
