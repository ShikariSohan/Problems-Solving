     
    /*
     
     
                     """Bismillahir Rahmanur Rahim"""
     
    */
    #include<bits/stdc++.h>
    using namespace std;
    void shikariIsListening()
    {
    #ifndef ONLINE_JUDGE
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    #endif
    }
    #define pi 2*acos(0.0)
    #define ll long long int
    #define inf 922337203470075000
    #define pb push_back
    #define pf push_front
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
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
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    #define vll vector<ll>
    #define pii pair<ll,ll>
    #define fs first
    #define sc second
     
    ll a[55][55],par[55],n;
    vector<pair<ll,pair<ll,ll>>>v;
    ll find_par(ll node)
    {
        if(par[node]==node)
            return node;
        return par[node]=find_par(par[node]);
    }
    void mergeNode(ll x,ll y)
    {
        ll m=find_par(x);
        ll n=find_par(y);
        if(m!=n)
            par[m]=n;
    }
    int main()
    {
       // shikariIsListening();
        //PaglaGhora;
        tin
        {
            in(n);
            v.clear();
           for(ll i=0;i<n;i++)
            par[i]=i;
           for(ll i=0; i<n; i++)
                for(ll j=0; j<n; j++)
                    cin>>a[i][j];
            ll val,sum=0,x,y,cost,to=0;
            for(ll i=0; i<n; i++)
                for(ll j=0; j<n; j++)
                {
                    sum+=a[i][j];
                    if(i!=j&&a[i][j]>0)
                    v.pb({a[i][j],{i,j}});
                }
            ll l=v.size();
     
            sort(all(v));
     
            for(ll i=0;i<l;i++)
            {
                x=v[i].sc.fs;
                y=v[i].sc.sc;
                cost=v[i].fs;
                if(find_par(x)!=find_par(y))
                {
                    to+=cost;
                    mergeNode(x,y);
                }
            }
            set<ll>st;
           for(ll i=0;i<n;i++)
           {
               st.insert(find_par(i));
           }
           tout;
           if(st.size()==1)
            cout<<sum-to<<ses;
           else cout<<-1<<ses;
        }
     
        return 0;
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
     
     
