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
    #define tin ll xxx;cin>>xxx; for(ll o=1;o<=xxx;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");

    vector<ll>v,a;
    int main()
    {
    //    freopen ("input.txt","r",stdin);
    //    freopen ("output.txt","w",stdout);

      tin
      {
          ll n,k;
          cin>>n;
          v.clear();
          a.clear();

          ll m=0;
          v.pb(0);

          for(ll i=1;i<=n;i++)
          {
              cin>>k;
              v.pb(k);
              m=max(m,k-v[i-1]);

              a.pb(k-v[i-1]);
          }
          ll x=m;
          ll temp=x;
          n=a.size();
          for(ll i=0;i<n;i++)
          {
             // cout<<a[i]<<" "<<temp<<ses;
              if(a[i]==temp)
                temp--;
             else if(a[i]>temp)
              {
                  x++;
                  temp=x;
              }
          }
          tout;

          cout<<x<<ses;
      }


    }

    /*
        || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
        \\ Power Is Power//
        || I Can Do This All day ||
        // We are on a Break \\ // How you doin'? \\
        || Say My Name || ~~ || I Am The Who Knocks ||
        // I Am Ted Mosby Architect \\
        || It Is Legen --wait for it -- dary ,Legendary ||
        \\ Penny - Penny - Penny // -- Bazinga

    */


