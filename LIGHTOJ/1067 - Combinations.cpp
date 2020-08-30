    /*


                        """Bismillahir Rahmanur Rahim"""

       */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define pb push_back
    #define pf push_front
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
    #define stm istringstream
    #define sob(x) x.begin(),x.end()
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y)
    {
        return (x*y)/gcd(x,y);
    }
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    ll gcd(ll a,ll b)
    {
        if(b==0)
            return a;
        else gcd(b,a%b);
    }
    pair<ll,ll> egcd(ll a,ll b)
    {
        if(b==0)
        {
            return {1,0};
        }
        pair<ll,ll>p;
        p=egcd(b,a%b);
        return {p.second,p.first - p.second*(a / b)};
    }
    ll modularInverse(ll a, ll n) {
       pair<ll,ll> ret = egcd(a, n);
      return ((ret.first % n) + n) % n;
    }
    ll M=1000003;
    ll fact[1000004];
    void precal()
    {
        fact[0]=1;
        for(ll i=1;i<1000004;i++)
        {
            fact[i]=((fact[i-1]%M)*(i%M))%M;
        }
    }
    int main()
    {
        precal();
      tin
      {
          ll m,n;
          cin>>n>>m;

          ll x=modularInverse(fact[m],M);
          ll y=modularInverse(fact[n-m],M);

          tout;
          cout<<((x%M)*(y%M)*(fact[n]%M))%M<<ses;
      }
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



