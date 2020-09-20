
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
#define ll long long int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
struct point
{
    ll x,y;
}dummy,dum;
ll n,m;
ll dr[]= {1,1,2,2,-1,-1,-2,-2};
ll dc[]= {2,-2,1,-1,2,-2,1,-1};
ll valid(ll r,ll c)
{
    if(r>=0 && r<n && c>=0 && c<m)
        return 1;
    else
        return 0;
}
ll rides[12][12],vis[12][12],check[12][12];
char a[12][12];
vector<point>riders;
ll ceiling(ll x,ll y)
{
    ll xx=x/y;
    if(x%y==0)
        return (xx);
    else return ((xx)+1LL);
}
void bfs(ll x,ll y,ll z,ll mx)
{
    queue<pair<point,ll>>q;
    dummy.x=x;
    dummy.y=y;
    q.push({dummy,0});
    rides[x][y]+=0LL;
    check[x][y]+=1LL;
    vis[x][y]=z;
    ll lvl;
    while(!q.empty())
    {
        dummy=q.front().first;
        ll lvl=q.front().sc;
        q.pop();
        for(ll i=0;i<8;i++)
        {
            x=dummy.x+dr[i];
            y=dummy.y+dc[i];
            if(valid(x,y))
            {
                if(vis[x][y]!=z)
                {
                    check[x][y]+=1LL;
                    vis[x][y]=z;
                    rides[x][y]+=ceiling(lvl+1,mx);
                    {
                        dum.x=x;
                        dum.y=y;
                        q.push({dum,lvl+1LL});
                    }
                }
            }
        }
    }


}
int main()
{
    shikariIsListening();
   //PaglaGhora;
    tin
    {
        memset(rides,0,sizeof(rides));
        memset(vis,0,sizeof(vis));
        memset(check,0,sizeof(check));
        riders.clear();
        in(n);
        in(m);
        for(ll i=0;i<n;i++)
         for(ll j=0;j<m;j++)
         {
             cin>>a[i][j];
             if(a[i][j]!='.')
             {
                 dummy.x=i;
                 dummy.y=j;
                 riders.pb(dummy);

             }
         }

         ll r=riders.size(),mx;
        for(ll i=0;i<r;i++)
        {
           mx=a[riders[i].x][riders[i].y]-'0';
           bfs(riders[i].x,riders[i].y,i+1,mx);
        }

        ll ans=inf;

        for(ll i=0;i<n;i++){
         for(ll j=0;j<m;j++)
         {
            //cout<<rides[i][j]<<" ";
            if(check[i][j]==r)
                ans=min(ans,rides[i][j]);
         }
         //cout<<ses;
         }
         //cout<<ses;
//         for(ll i=0;i<n;i++){
//         for(ll j=0;j<m;j++)
//         {
//            cout<<check[i][j]<<" ";
//         }
//         cout<<ses;}
         tout;
         if(ans==inf)
            cout<<-1<<ses;
         else cout<<ans<<ses;

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
