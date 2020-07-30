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
#define tout cout<<"Case "<<o<<": ";
ll dr[]={-1,0,1,0};
ll dc[]={0,1,0,-1};
ll valid(ll r,ll c,ll x,ll y)
{
    if(r>=0 && r<x && c>=0 && c<y)
        return 1;
    else return 0;
}
ll ar[20][20];
int bfs(ll a,ll b,ll x,ll y)
{
    ll dis[x][y]={},vis[x][y]={};
     queue<pair<ll,ll> >q;
        q.push({a,b});
        vis[a][b]=1;
        dis[a][b]=0;
        while(!q.empty())
          {
             ll p,k;
             p=q.front().first;
             k=q.front().second;
             q.pop();
             if(ar[p][k]==3)
                return dis[p][k];
             for(int i=0;i<4;i++)
             {
                 ll r=p+dr[i];
                 ll c=k+dc[i];

                 if(valid(r,c,x,y))
                 {
                     if(vis[r][c]==0)
                     {
                         if(ar[r][c]==1 || ar[r][c]==3)
                            {
                                vis[r][c]=1;
                                dis[r][c]=dis[p][k]+1;
                               q.push({r,c});
                            }
                     }
                 }
             }
          }
}

int main()
{
   // freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
tin
    {
        ll x,y,a,b,p1,p2,q1,q2,r1,r2;
        cin>>x>>y;
        char c;
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            {
                cin>>c;
                if(c=='.')
                    ar[i][j]=1;
                if(c=='#' || c=='m')
                    ar[i][j]=2;
                if(c=='h')
                {
                    ar[i][j]=3;
                    a=i;
                    b=j;
                }
                if(c=='a')
                {
                    ar[i][j]=1;
                    p1=i;
                    p2=j;
                }
                if(c=='b')
                {
                    ar[i][j]=1;
                    q1=i;
                    q2=j;
                }
                if(c=='c')
                {
                    ar[i][j]=1;
                    r1=i;
                    r2=j;
                }
            }

ll z=bfs(p1,p2,x,y);
ll z1=bfs(q1,q2,x,y);
ll z2=bfs(r1,r2,x,y);
      tout; cout<<max(z,max(z1,z2))<<ses;
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
