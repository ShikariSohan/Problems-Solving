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
const ll sz = 1020;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"World #"<<o<<ses;;
#define spc printf(" ");
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
bool valid(ll i,ll j,ll n,ll m)
{
    if(i>=0 && i<n && j>=0 && j<m)
        return true;
    else return false;
}
unordered_map<char,ll>mp;
unordered_map<ll,ll>mp2;
ll vis[sz][sz],a[sz][sz];
char ans[26];
void lets_have_some_fun()
{
    for(ll i=0;i<sz;i++)
      for(ll j=0;j<sz;j++)
    {
        a[i][j]=0;
        vis[i][j]=0;
    }
    mp.clear();
    mp2.clear();
}
bool cmp(const pair<ll,char> &a,const pair<ll,char> &b)
{
    if(a.first<b.first)
      return true;
    else if(a.first==b.first)
    {
        if(a.second>b.second)
            return true;
        else return false;
    }
    else return false;

}
void dfs(ll i,ll j,ll m,ll n)
{
    vis[i][j]=1;;
    for (ll k=0;k<4;k++)
        {
           ll x=i+dx[k];
           ll y=j+dy[k];
           if(valid(x,y,m,n))
            if(!vis[x][y] && (a[x][y]==a[i][j]))
                 dfs(x,y,m,n);
        }

}
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll n,m;
    char c;
    tin
    {
        in(n);
        in(m);
        lets_have_some_fun();
        ll assing=1;
          for(ll i=0;i<n;i++)
             for(ll j=0;j<m;j++)
             {
                 cin>>c;
                 if(mp.find(c)==mp.end())
                 {
                     mp[c]=assing;
                     ans[assing]=c;
                     assing++;

                 }
                 a[i][j]=mp[c];
             }

             for(ll i=0;i<n;i++)
             for(ll j=0;j<m;j++)
             {
                 if(vis[i][j]==0)
                 {
                     dfs(i,j,n,m);
                     mp2[a[i][j]]++;
                 }
             }
             vector<pair<ll,char> > v;
             for(auto &it :mp2)
             {
                 v.pb({it.second,ans[it.first]});
             }
             tout;
             sort(v.rbegin(),v.rend(),cmp);
             for(ll i=0;i<assing-1;i++)
             {
                 cout<<v[i].second<<": "<<v[i].first<<ses;
             }


    }



    return 0;
}
/*
2
4 8
ttuuttdd
ttuuttdd
uuttuudd
uuttuudd

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

