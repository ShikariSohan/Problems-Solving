     
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
    #define in(x) scanf("%lld",&x);
    #define out(x) printf("%lld\n",x);
    #define stm istringstream
    #define all(x) x.begin(),x.end()
    #define PaglaGhora ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define spc printf(" ");
    #define vll vector<ll>
    #define pii pair<ll,ll>
    #define fs first
    #define sc second
    #define sz 200015
    unordered_map<string,ll>mp;
    ll par[sz];
    ll get_par(ll x)
    {
        if(par[x]==x)
            return x;
        return par[x]=get_par(par[x]);
    }
    int main()
    {
       //shikariIsListening;
       //PaglaGhora;
       tin
       {
           mp.clear();
           for(ll i=1;i<sz;i++)
            par[i]=i;
           string u,v;
           ll n,k=1,p,q;
           cin>>n;
           bool ok=true;
           while(n--)
           {
               cin>>u>>v;
               if(mp[u]==0)
                mp[u]=k++;
               if(mp[v]==0)
                mp[v]=k++;
                p=get_par(mp[u]);
                q=get_par(mp[v]);
               if(p==q)
                ok=false;
               else
                par[p]=q;
           }
           tout;
           if(ok)
            cout<<"Yes"<<ses;
           else cout<<"No"<<ses;
     
     
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
     
