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
    ll ck(ll n)
    {
        ll x=0;
        ll p=5;
        while(1)
        {
            x+=(n/p);
            p*=5;
            if(n/p==0)
                break;
        }
        return x;
    }
    int main()
    {
      tin
      {
          ll n;
          cin>>n;
          bool ok=false;
         ll b=0,e=1000000000000;
         ll mid;
         ll ans;
         while(b<e)
         {
             mid=(b+e)/2;
             ll x=ck(mid);

             if(x==n)
             {
                ok=true;
                ans=mid;
                 break;
             }
             if(x<n)
             {
                  b=mid+1;

             }
             else
             {
                 e=mid-1;

             }
         }
         tout;

         if(ok)
            {
                while(1)
                {
                                if(ans%5==0)
                {
                    cout<<ans<<ses;
                    break;
                }
                else ans--;
                }
            }
         else cout<<"impossible"<<ses;


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




