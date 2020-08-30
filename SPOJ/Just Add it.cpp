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
    ll lcm(ll x,ll y)
    {
        return (x*y)/gcd(x,y);
    }
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    #define mod 10000007
    ll bigmod(ll n,ll p)
    {
        if(p==0)
            return 1;
         if(p%2)
         {
             return (n*(bigmod(n,p-1)%mod))%mod;
         }
        ll x;
        x=bigmod(n,p/2)%mod;
        return (x*x)%mod;
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        ll n,m;
        while(cin>>n>>m)
        {
             if(n==0&&m==0)
                return 0;
              ll a=bigmod(n,n);
              ll b=bigmod(n,m);
              ll c=2*bigmod(n-1,m);
              ll d=2*bigmod(n-1,n-1);
              cout<<(a+b+c+d)%mod<<ses;
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

