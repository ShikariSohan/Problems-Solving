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
ll dr[]={-1,0,1,0,-1,-1,1,1};
ll dc[]={0,1,0,-1,1,-1,-1,1};
ll valid(ll r,ll c,ll x,ll y)
{
    if(r>=0 && r<x && c>=0 && c<y)
        return 1;
    else return 0;
}
ll ar[100][100],vis[100][100];
void bfs(ll a,ll b,ll y,ll x)
{
        queue<pair<ll,ll> >q;
        q.push({a,b});
        vis[a][b]=1;
        while(!q.empty())
          {
             ll p,k;
             p=q.front().first;
             k=q.front().second;
             q.pop();
             for(int i=0;i<8;i++)
             {
                 ll r=p+dr[i];
                 ll c=k+dc[i];
                 if(valid(r,c,y,x))
                 {
                     if(vis[r][c]==0)
                     {
                         if(ar[r][c]==1)
                            {
                                vis[r][c]=1;
                               q.push({r,c});
                            }
                     }
                 }
             }
          }

}

int main()
{
    //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);


        ll x,y,a,b;
      while(1)
        {
            cin>>x>>y;
            if(x==0)
                return 0;
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            {
                ar[i][j]=0;
                vis[i][j]=0;
            }
        vector<pair<ll,ll> >v;
        char c;
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            {
                cin>>c;
                if(c=='*')
                    ar[i][j]=2;
                if(c=='@')
                {
                    ar[i][j]=1;
                    v.pb({i,j});
                }
            }ll k=0;
        for(int i=0;i<v.size();i++)
        {
            a=v[i].first;
            b=v[i].second;
            if(vis[a][b]==0)
               {
                    bfs(a,b,x,y);
                    k++;
               }
        }

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
