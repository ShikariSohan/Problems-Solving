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
    #define M 2000000
    bool marked[M];
    bool isPrime(ll n) {
      if (n < 2) return false;
      if (n == 2) return true;
      if (n % 2 == 0) return false;
      return marked[n] == false;
    }
    vector<ll>v;
    void sieve()
    {
      for (ll i = 3; i * i <= M; i += 2) {
        if (marked[i] == false) {
          for (ll j = i * i; j <= M; j += i + i) {
            marked[j] = true;
          }
        }
      }
      for(ll i=1;i<M;i++)
        if(isPrime(i))
            v.push_back(i);
    }
    ll MOD= 1000000007;
    map<ll,ll>mp;
    void primefact(ll n)
    {
        ll i=0;
        for(ll i=0;(v[i]*v[i])<=n;i++)
        {
           if(n%v[i]==0)
           {
               while(n%v[i]==0)
               {
                   mp[v[i]]++;
                   n=n/v[i];
               }
           }
        }
        if(n!=1)
            mp[n]++;
    }
    ll bigmod(ll n,ll p,ll m)
    {
        if(p==0)
            return 1;
        if(p%2==0)
        {
            ll ret=bigmod(n,p/2,m);
            return ((ret%m)*(ret%m))%m;
        }
        return ((n%m)*(bigmod(n,p-1,m)%m))%m;
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
    int main()
    {

        sieve();
       tin
       {
           mp.clear();
           ll n,m;
           cin>>n>>m;
           primefact(n);
           ll sum=1;
           ll x,y,z,a;
           if(n==MOD)
           {
               tout;
               cout<<1<<ses;
               continue;
           }
           for(auto &it :mp)
           {
               x=it.first;
               y=it.second*m;
               z=bigmod(x,y+1,MOD)-1;
               a=modularInverse(x-1,MOD);
               z=(z*a)%MOD;
               sum=((sum%MOD)*z)%MOD;
           }
           tout;
           cout<<sum<<ses;
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


