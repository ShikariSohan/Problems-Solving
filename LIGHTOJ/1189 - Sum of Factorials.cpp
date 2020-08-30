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
    #define spc printf(" ")
    ll fact[21],ck[21];
    char dig[]={'0','1','2','3','4','5','6','7','8','9'};
    void factt()
    {
        fact[0]=1;
       for(ll i=1;i<21;i++)
       {
           fact[i]=fact[i-1]*i;
       }
    }
    int main()
    {

          factt();
          tin
          {
              ll n;
              cin>>n;
              memset(ck,0,sizeof(ck));
              for(ll i=20;i>=0;i--)
              {
                  if(fact[i]<=n&&n>0)
                  {
                      n-=fact[i];
                      ck[i]=1;
                  }
                  if(n==0)
                    break;
              }
              tout;
              string s;
              if(n==0)
              {
                  for(ll i=0;i<21;i++)
                  {
                      if(ck[i])
                      {
                          if(i>9)
                          {
                              s+=dig[i/10];
                              s+=dig[i%10];
                          }
                          else s+=dig[i];
                          s+="!+";
                      }
                  }
                  s.pop_back();
                  cout<<s<<ses;
              }
              else cout<<"impossible"<<ses;
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


