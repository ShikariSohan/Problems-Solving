/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
#define sz 100000*2
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
#define mara puts("dekh ki hoise");
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
ll a[9][9],vis[9][9],dis[9][9];
ll dr[]={2,-2,2,-2,1,1,-1,-1,};
ll dc[]={1,1,-1,-1,2,-2,2,-2};
void init()
{
    for(int i=0;i<=9;i++)
    for(int j=0;j<=9;j++)
    {
        a[i][j]=0;
        vis[i][j]=0;
        dis[i][j]=0;
    }
}
bool valid(ll x,ll y)
{
    if(x<=8 && x>=1 && y<=8 && y>=1 && vis[x][y]==0)
        return 1;
    else return 0;
}
ll bfs(ll x, ll y , ll a , ll b)
{
    queue<pair<ll,ll> >q;
    q.push({x,y});
    vis[x][y]=1;
    dis[x][y]=0;
    while(!q.empty())
    {
        ll m=q.front().first;
        ll n=q.front().second;
       // cout<<"m n"<<m<<" "<<n<<"   "<<a<<b;
                q.pop();
        if(m==a && n==b)
            return dis[a][b];
        for(int i=0;i<8;i++)
        {
            ll r=m+dr[i];
            ll c=n+dc[i];
            if(valid(r,c))
            {
                    vis[r][c]=1;
                    q.push({r,c});
                    dis[r][c]=dis[m][n]+1;
            }
        }

    }
    return 0;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
  ll n1,n2,a1,a2;
  char c1,c2;
  string s;
  while(getline(cin,s))
  {
     init();
     c1=s[0];
     c2=s[3];
     n1=s[1]-'0';
     n2=s[4]-'0';
    a1=c1-96;
    a2=c2-96;
      ll x=bfs(a1,n1,a2,n2);
      cout<<"To get from "<<c1<<n1<<" to "<<c2<<n2<<" takes "<<x<<" knight moves."<<ses;
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
