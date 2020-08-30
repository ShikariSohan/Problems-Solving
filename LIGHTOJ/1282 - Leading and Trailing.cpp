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

    ll bigmod(ll n,ll m,ll p)
    {
        if(p==0)
          return 1;
        if(p%2==0)
        {
          ll ret=bigmod(n,m,p/2);
          return ((ret%m)*(ret%m))%m;
        }
        return ((n%m)*(bigmod(n,m,p-1)%m))%m;
    }

    int main()
    {
       //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
       int n,k,t;
       tin
       {
          cin>>n>>k;
          double x=(k*1.00)*log10(n*1.00);
          x=x-(ll)x;
          x=pow(10,x)*100;
          tout;
          cout<<(ll)x<<" ";
          ll y=bigmod(n,1000,k);
          if(y<10)
          cout<<"00"<<y<<ses;
          else if(y<100)
          cout<<"0"<<y<<ses;
          else
          cout<<y<<ses;
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

