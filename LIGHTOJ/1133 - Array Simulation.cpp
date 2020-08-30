    /*


                         """Bismillahir Rahmanur Rahim"""

        */
    #include<stdio.h>
    #include<string.h>
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define inf 922337203470075000
    #define pb push_back
    #define pf push_front
    const ll sz = 100001;
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
    #define tout cout<<"Case "<<o<<":"<<ses;
    #define spc printf(" ");
    ll a[1000];
    int main()
    {
        //freopen ("input.txt","r",stdin);
        // freopen ("output.txt","w",stdout);
        tin
        {
            ll n,m,p,q;
            in(n);
            in(m);
            string x;
            for(ll i=0; i<n; i++)
            {
                in(a[i]);
            }
            while(m--)
            {
                cin>>x;
                if(x[0]=='S')
                {
                    in(p);
                    for(ll i=0; i<n; i++)
                        a[i]+=p;
                }
                else if(x[0]=='M')
                {
                    in(p);
                    for(ll i=0; i<n; i++)
                        a[i]*=p;
                }
                else if(x[0]=='D')
                {
                    {
                        in(p);
                        for(ll i=0; i<n; i++)
                            a[i]/=p;
                    }
                }
                else if(x[0]=='P')
                {
                    in(p);
                    in(q);
                    swap(a[p],a[q]);

                }
                else
                    reverse(a,a+n);

            }
            tout;
            for(ll i=0;i<n;i++)
            {
                cout<<a[i]<<" \n"[i==n-1];
            }

           } return 0;
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

