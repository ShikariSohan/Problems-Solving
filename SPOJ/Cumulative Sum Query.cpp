
    /*


                     """Bismillahir Rahmanur Rahim"""

    */
    #include<bits/stdc++.h>

    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define inf 922337203470075000LL
    #define pb push_back
    #define pf push_front
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
    #define uset unordered_set
    #define in(x) scanf("%lld",&x);
    #define out(x) printf("%lld\n",x);
    #define stm istringstream
    #define all(x) x.begin(),x.end()
    #define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y)
    {
        return (x*y)/gcd(x,y);
    }
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<":\n";
    #define spc printf(" ");
    #define vll vector<ll>
    #define pii pair<ll,ll>
    #define fs first
    #define sc second
    #define sz 100015
    #define EPS 1e-18
    #define M 200005
    ll pref[M],a[M];
    int main()
    {
       ll n;
       in(n);
       for(ll i=1;i<=n;i++)
        in(a[i]);
        reverse(a+1,a+n+1);
        for(ll i=1;i<=n;i++)
            a[i]=a[i]+a[i-1];
        ll m,u,v,p;
        in(m);
        while(m--)
        {
            in(p);
            if(p==1)
            {
                in(u);
                in(v);
                ll l=n-v+1;
                ll r=n-u+1;

                cout<<a[r]-a[l-1]<<ses;
            }
            else
            {
                in(v);
                a[n+1]=a[n]+v;
                n++;
            }
        }




    }
    /*   --------------------
        |      ~SOHAN~       |
        |   ~ShikariSohan~   |
         --------------------
        || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
        \ Power Is Power//
        || I Can Do This All day ||
        // We are on a Break \ // How you doin'? \
        || Say My Name || ~~ || I Am The Who Knocks ||
        // I Am Ted Mosby Architect \
        || It Is Legen --wait for it -- dary ,Legendary ||
        \ Penny - Penny - Penny // -- Bazinga

    */
