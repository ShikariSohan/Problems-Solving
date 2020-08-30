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
    ll ck(ll n,ll p1)
    {
        ll x=0;
        ll p=p1;
        while(1)
        {
            x+=(n/p);
            p*=p1;
            if(n/p==0)
                break;
        }
        return x;
    }
    ll pp(ll n,ll p)
    {
        ll x=0;
        while(n%p==0)
        {
            n=n/p;
            x++;
        }
        return x;
    }
    int main()
    {
        tin
        {
            ll n,r,p,q;
            cin>>n>>r>>p>>q;
            ll x5=ck(n,5)-(ck(r,5)+ck(n-r,5));
            ll x2=ck(n,2)-(ck(r,2)+ck(n-r,2));
           ll p2=pp(p,2)*q;
           ll p5=pp(p,5)*q;
           tout;
           x5=x5+p5;
           x2=x2+p2;
           cout<<min(x2,x5)<<ses;



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


