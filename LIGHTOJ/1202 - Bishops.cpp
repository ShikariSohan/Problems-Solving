    /*


                     """Bismillahir Rahmanur Rahim"""

    */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define pb push_back
    #define pf push_front
    const ll sz = 1000001;
    #define mp make_pair
    #define ses '\n'
    #define stm istringstream
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    ll a,b,c,d,p,q,w;

    int main()
    {
    //    freopen ("input.txt","r",stdin);
    //  freopen ("output.txt","w",stdout);
        tin
        {
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
            p=(a+b)%2;
            q=(c+d)%2;
            tout;
            if(p!=q)
            {
                cout<<"impossible"<<ses;continue;
            }
            p=abs(a-c);
            q=abs(b-d);
            if(p==q)
            cout<<"1"<<ses;
            else cout<<"2"<<ses;
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



