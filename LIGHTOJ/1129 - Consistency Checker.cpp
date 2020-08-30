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
    struct node
    {
        bool endmark;
        node* next[12];
        ll cnt;
        node()
        {
            endmark=false;
            cnt=0;
            for(ll i=0;i<12;i++)
                next[i]=NULL;
        }
    } *root;
    void insertt(string s)
    {
        node* cur=root;
        ll x,y;
        for(ll i=0;i<s.size();i++)
        {
            x=s[i]-'0';
            cur->cnt++;
            if(cur->next[x]==NULL)
            {
                cur->next[x] = new node();
                cur->cnt++;

            }
            cur=cur->next[x];
        }
        cur->endmark=true;
    }
    bool searchh(string s)
    {
        node* cur=root;
        for(ll i=0;i<s.size();i++)
        {
          ll  x=s[i]-'0';
            if(cur->next[x]==NULL)
            {
                return false;
            }
            cur=cur->next[x];
        }

        if(cur->endmark && cur->cnt==0)
            return true;
        return false;
    }
    void del(node* cur)
    {
        for(ll i=0;i<12;i++)
        {
            if(cur->next[i])
                del(cur->next[i]);
        }
        delete(cur);
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        vector<string>v;

       tin
       {
        ll a,n;
        in(n);
        v.clear();
    root=new node();
        while(n--)
        {
            string s;
            cin>>s;
            insertt(s);
            v.pb(s);
        }
        bool x;
        for(ll i=0;i<v.size();i++)
        {
            x=searchh(v[i]);
            if(!x)
                break;
        }tout;
        if(!x)
            cout<<"NO"<<ses;
        else cout<<"YES"<<ses;
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



