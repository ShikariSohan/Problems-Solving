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
    string s,pat,ans;
    ll z[2000008];
    void calculateZ(string s)
    {
        memset(z,0,sizeof(z));
        ll n=s.size();
        z[0]=n;
        for(ll i=1,l=0,r=0;i<n;i++)
        {
            if(i>r)
            {
                r=i;
                l=i;
                while(r<n&&s[r]==s[r-l])
                    r++;
                z[i]=r-l;
                r--;
            }
            else
            {
                ll idx=i-l;
                if(z[idx]<r-i+1)
                    z[i]=z[idx];
                else
                {
                    l=i;
                    while(r<n&&s[r]==s[r-l])
                        r++;
                    z[i]=r-l;
                    r--;
                }
            }
        }
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        tin
        {
           cin>>s>>pat;
           ans=pat+"#"+s;
           calculateZ(ans);
          ll k=0;
            for(ll i=0;i<ans.size();i++)
              {
                 // cout<<z[i]<<ses;
                  if(z[i]==pat.size())
                    k++;
              }
              tout;
              cout<<k<<ses;
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



