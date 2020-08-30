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
vector<ll>adj[200050];
bool vis[200050];
ll dis[200050];
void bfs(ll n)
{
    queue<ll>q;
    q.push(n);
    vis[n]=true;
    dis[n]=0;
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(ll i=0;i<adj[x].size();i++)
        {
            ll node=adj[x][i];
            if(!vis[node])
            {
                q.push(node);
                vis[node]=true;
                dis[node]=dis[x]+1;
            }
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,k;
    in(n);
    in(k);
    ll u,v;
    if(k!=n-1)
        {cout<<"NO"<<ses;
return 0;}

    for(ll i=0;i<k;i++)
    {
        in(u);
        in(v);
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(1);
    ll m=10000000000055,p,ans=15258584874584548;
    k=0;

    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
            k=1;
    }
    if(k)
    cout<<"NO"<<ses;
    else
        cout<<"YES"<<ses;

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
