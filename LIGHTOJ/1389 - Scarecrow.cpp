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
    string s;

    int main()
    {
      tin
      {
          ll x; cin>>x;
           cin>>s;

           ll k=0;
          for(ll i=0;i<x;i++)
          {
              if(i+2<x)
              {
                  if(s[i]==s[i+2]&&s[i]=='.')
                  {
                      k++;
                      i+=2;
                      continue;
                  }
                  if(s[i]==s[i+2]&&s[i]==s[i+1]&&s[i]=='#')
                  {
                      i+=2;
                      continue;
                  }

              }
              if(s[i]=='.')
              {
                  k++;
                  i++;
              }
          }tout;
          cout<<k<<ses;
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

