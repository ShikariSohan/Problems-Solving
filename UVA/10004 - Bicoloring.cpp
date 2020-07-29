
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
ll vis[20001];
ll colour[20001];
vector<ll> v[20001] ;

ll bfs(ll start)
{

    ll bl,re;
    queue<ll>q;
    q.push(start);
    ll w;
    colour[start]=2;
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
                                colour[node]=1;
                            }
                        else {
                            colour[node]=2;

                        }
                    }
                }
                if(colour[w]==colour[node])
                    return 0;
            }
        }
    return 1;
}



int main()
{
     ll  n,l;

     while(1)
     {
         cin>>l;
         if(l==0)
            return 0;
         ll x,y,m,sum=0,i;
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
   if(bfs(0))
    cout<<"BICOLORABLE."<<ses;
    else cout<<"NOT BICOLORABLE."<<ses;


    }return 0;
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
