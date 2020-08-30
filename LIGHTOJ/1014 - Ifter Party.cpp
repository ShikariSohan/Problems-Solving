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
    set<ll>s;
    ll x;
    void div(ll n)
    {
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
               if(x<i)
           {
                s.insert(i);

           }
            if(x<(n/i))
           {
                s.insert((n/i));

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
            ll n;
            in(n);
            in(x);
            s.clear();

            n=n-x;
            div(n);
            tout;
            if(n==0)
            {
                cout<<1<<ses;
                continue;
            }
            if(s.empty())
            {
                cout<<"impossible"<<ses;
                continue;
            }
            set<ll>::iterator it=s.begin();
            for(;it!=s.end();it++)
            {

                cout<<*it;
                it++;
                if(it==s.end())
                    cout<<ses;
                else spc;
                it--;
            }

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


