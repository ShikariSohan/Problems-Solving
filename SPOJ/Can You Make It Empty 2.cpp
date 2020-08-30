    /*


                     """Bismillahir Rahmanur Rahim"""
    */
    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos(0.0)
    #define ll long long int
    #define inf 9223372034700
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
    stack<char>st;
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        string s;
        tin
        {
            while(!st.empty())
                st.pop();
            cin>>s;
            for(ll i=0;i<s.size();i++)
            {
                if(st.size()>=2)
                {
                    char x=st.top();
                    st.pop();
                    char y=st.top();
                    char z=s[i];
                    if(y=='1'&&x=='0'&&z=='0')
                        st.pop();
                    else
                    {
                        st.push(x);
                        st.push(z);
                    }

                }
                else st.push(s[i]);

            }
            tout;
            if(st.empty())
                cout<<"yes"<<ses;
            else cout<<"no"<<ses;

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
