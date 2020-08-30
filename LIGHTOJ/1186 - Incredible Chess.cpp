
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
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";


    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        tin
        {
            ll x,p,sum=0;
            cin>>x;
            ll y=x;
            vector<ll>a,b;
            while(x--)
            {
                cin>>p;
                a.pb(p);
            }
            x=y;
            while(x--)
            {
                cin>>p;
                b.pb(p);
            }
            for(ll i=0;i<y;i++)
            {
                p=(b[i]-a[i]-1);
                //cout<<"sum "<<sum<<" xor "<<p;
                sum^=p;
               // cout<<" = "<<sum<<ses;
            }
            //cout<<"sss "<<sum<<ses;
            tout;
            if(sum==0)
                cout<<"black wins"<<ses;
            else cout<<"white wins"<<ses;
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


