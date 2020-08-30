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
    double ans[1000010];
    void precal()
    {
        for(ll i=1;i<1000010;i++)
        {
            ans[i]=ans[i-1]+log10(i*1.00);
        }
    }
    int main()
    {
        // freopen ("input.txt","r",stdin);
        // freopen ("output.txt","w",stdout);
        precal();
        tin
        {
            ll n,b;
            cin>>n>>b;
            double x=(ans[n])/(log10(b));
            x=floor(x)+1.0;
            tout;
            cout<<(ll)x<<ses;
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




