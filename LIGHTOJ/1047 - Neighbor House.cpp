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
    ll dp[22][4];
    ll n,a[22],b[22],c[22];
    ll f(ll i, ll j)
    {
       if(i==n-1)
       {
           if(j==1)
           return min(b[i],c[i]);
           if(j==2)
           return min(a[i],c[i]);
           if(j==3)
           return min(b[i],a[i]);
       }
       if(dp[i][j]!=-1)
        return dp[i][j];
       ll x=0,y=0,z=0;
       if(j==1)
       {
           x=b[i]+f(i+1,2);
           y=c[i]+f(i+1,3);
       }
      else if(j==2)
       {
           x=a[i]+f(i+1,1);
           y=c[i]+f(i+1,3);
       }
       else if(j==3)
       {
           x=b[i]+f(i+1,2);
           y=a[i]+f(i+1,1);
       }
       else
       {
            x=b[i]+f(i+1,2);
           y=a[i]+f(i+1,1);
           z=c[i]+f(i+1,3);
           x=min(x,z);
       }
       return dp[i][j]=min(x,y);

    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        tin
        {
            memset(dp,-1,sizeof(dp));
            in(n);
            for(ll i=0;i<n;i++)
            {
                in(a[i]);
                in(b[i]);
                in(c[i]);
            }
            tout;
            ll x=f(0,0);
            out(x);
        }
        return 0;
    }
    /*   --------------------
        |      ~SOHAN~       |
        |   ~ShikariSohan~   |
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


