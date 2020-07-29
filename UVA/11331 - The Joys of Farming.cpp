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
#define eps 1e-7
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define SZ 10000010
ll vis[20010],col[20010];
ll n,b,c,m,u,v;
vector<ll>adj[20010];
/// red =1 blue =2
bool bfs(ll n)
{
    queue<ll>q;
    vis[n]=1;
    ll red=1,blue=0,x;
    q.push(n);
    col[n]=1;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        ll l=adj[x].size();
        for(int i=0;i<l;i++)
        {
            ll node=adj[x][i];
            if(!vis[node])
            {
                vis[node]=1;
                q.push(node);
                if(col[x]==1)
                {
                    col[node]=2;
                    blue++;
                }
                else
                {
                    col[node]=1;
                    red++;
                }
            }
            if(col[x]==col[node])
            {
                return false;
            }
        }
    }
    ll mx=max(red,blue);
    ll mi=min(red,blue);
    if(b>c)
    {
        b=b-mx;
        if(b<0)
            return false;
        c=c-mi;
        if(c<0)
            return false;

    }
    else
    {
        c=c-mx;
        if(c<0)
            return false;
            b=b-mi;
        if(b<0)
            return false;
    }

    return true;

}
int main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);

bool tt;
    tin
    {
        for(ll i=0;i<20010;i++)
        {
            adj[i].clear();
            vis[i]=0;
            col[i]=0;
        }

        scanf("%lld %lld %lld",&b,&c,&m);
        n=b+c;
        while(m--)
        {
             scanf("%lld %lld",&u,&v);
             adj[v].pb(u);
             adj[u].pb(v);
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                tt=bfs(i);
                if(tt==false)
                {
                    break;

                }
            }
        }
        if(tt)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
