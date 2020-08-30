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
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    ll a[3*100][3*100],dp[3*100][3*100],l,n;
    bool valid(ll x,ll y)
    {
        if(x>0 && y>0 && y<=l && x<=l)
            return true;
        return false;
    }
    ll yo(ll x,ll y)
    {
        if(x==l && y==n)
            return a[x][y];
        if(dp[x][y]!=-1)
           return dp[x][y];
        ll x1=x+1,y1=y+1,p;
        if(valid(x1,y1))
        {
                p=yo(x1,y1)+a[x][y];
        }
        else p=0;
        ll x2=x+1,y2=y-1,q;
        if(valid(x2,y2))
        {
                q=yo(x2,y2)+a[x][y];
        }
        else q=0;

        return dp[x][y]=max(p,q);
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        ll c,j;
       tin
       {
          memset(a,0,sizeof(a));
          memset(dp,-1,sizeof(dp));
          in(n);
           for(ll i=1;i<=n;i++)
           {
                c=i;
                j=n-i+1;
               while(c--)
               {
                   in(a[i][j]);
                   j+=2;
               }
           }
            l=2*n-1;
           for(ll i=n+1;i<=l;i++)
           {
               c=l-i+1;
               j=i-n+1;
               while(c--)
               {
                   in(a[i][j]);
                   j+=2;
               }
           }
           tout;
           out(yo(1,n));
       }


        return 0;
    }
    /*
         --------------------
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


