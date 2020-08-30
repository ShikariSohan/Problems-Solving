
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
    map<char,ll>mp;
    struct tr
    {
        ll k;
        bool mark;
        tr* a[4];
        tr()
        {
            k=1;
            mark=false;
            for(ll i=0; i<4; i++)
            {
                a[i]=NULL;
            }
        }
    }*root;
    void ins(string s)
    {
        tr* cur=root;
        for(ll i=0; i<s.size(); i++)
        {
            ll x=mp[s[i]];
            ///cout<<s[i]<<cur->k<<ses;
            if(cur->a[x]==NULL)
            {
                cur->a[x]=new tr();
                cur=cur->a[x];
            }
            else
            {
                cur=cur->a[x];
                cur->k++;
            }


        }
        cur->mark=true;
    }
    void del(tr* cur)
    {
        for (int i = 0; i < 4; i++)
            if (cur->a[i])
                del(cur->a[i]);

        delete (cur);
    }
    ll m=0;
    void dfs(tr* cur,ll p)
    {
      m=max(((cur->k)*(p)),m);
        for (int i = 0; i < 4; i++)
            if (cur->a[i])
                {

                    //cout<<m<<ses;
                    dfs(cur->a[i],p+1);
                }

    }
    vector<string>v;
    string s;

    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        //ghora;
        mp['C']=0;
        mp['G']=1;
        mp['T']=2;
        mp['A']=3;
        tin
        {
            root=new tr();
            ll n;
            cin>>n;
            for(ll i=0; i<n; i++)
            {
                cin>>s;
                ins(s);
                //v.pb(s);
            }
            m=0;
            dfs(root,0);
            tout;
            cout<<m<<ses;
            del(root);
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



