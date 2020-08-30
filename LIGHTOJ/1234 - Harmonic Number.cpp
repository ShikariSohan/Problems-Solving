    /*


                     """Bismillahir Rahmanur Rahim"""

    */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll int
    #define inf 922337203470075000
    #define pb push_back
    #define pf push_front
    const ll sz = 1000001;
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
    #define in(x) scanf("%d",&x);
    #define out(x) printf("%d",x);
    #define stm istringstream
    #define all(x) x.begin(),x.end()
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    double ans[1000007];
    #define gam 0.57721566490
    void precal()
    {
       ans[0]=0.0;
        for(ll i=1;i<1000007;i++)
        {
            ans[i]=ans[i-1]+(1.0/(i*1.0));
        }
    }
    int main()
    {
    // freopen ("input.txt","r",stdin);
     //freopen ("output.txt","w",stdout);
     precal();
      tin
      {
          ll n;
          cin>>n;
          tout;
          if(n<1000007)
            {
                printf("%.12f\n",ans[n]);
            }
            else
            {
               double x=log(n*1.00)+gam+(1.00/(2.00*n))-(1.0/(12.0*n*n));
               printf("%.12f\n",x);
            }
      }
        return 0;
    }
    /*   --------------------
        |      ~SOHAN~       |
        |   ~Chandler68~     |
         ----------------n----
        || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
        \\ Power Is Power//
        || I Can Do This All day ||
        // We are on a Break \\ // How you doin'? \\
        || Say My Name || ~~ || I Am The Who Knocks ||
        // I Am Ted Mosby Architect \\
        || It Is Legen --wait for it -- dary ,Legendary ||
        \\ Penny - Penny - Penny // -- Bazinga

    */


