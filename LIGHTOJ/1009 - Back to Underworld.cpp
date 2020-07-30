
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
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define black 1
#define red 2
ll vis[20001];
ll colour[20001];
vector<ll> v[20001] ;

ll bfs(ll start)
{

    ll bl,re;
    queue<ll>q;
    q.push(start);
    ll w;bl=0,re=0;
    colour[start]=2; re++;
    while(!q.empty())
    {
        w=q.front();
        q.pop();
        if(vis[w])continue;
        vis[w]=1;

            for(ll i=0;i<v[w].size();i++)
            {
                ll node=v[w][i];
                if(vis[node]==0)
                {
                    q.push(node);
                    if( colour[node]==0)
                    {
                        if(colour[w]==2)
                            {
                                colour[node]=1;bl++;
                            }
                        else {
                            colour[node]=2;
                            re++;
                        }
                    }
                }
            }
        }
    return max(re,bl);
    }



int main()
{

    ll t;
    cin>>t;
    for(ll k=0;k<t;k++)
    {

        ll x,y,m,n,sum=0,i;
         for(i=0;i<20001;i++)
            v[i].clear();

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;

        v[x].pb(y);
        v[y].pb(x);
    }
    memset(vis,0,sizeof(vis));
    memset(colour,0,sizeof(colour));
    for(int i=1;i<=20000;i++)if(!vis[i] && v[i].empty()==0)
      {
          sum+=bfs(i);
      }


    printf("Case %lld: %lld\n",k+1,sum);
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
