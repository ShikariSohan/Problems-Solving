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
    #define ses '\n'
    #define stm istringstream
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    map<string,ll>mp;
    vector<pair<ll,pair<ll,ll> > > ed;
    set<ll>st;
    ll par[100010];
    ll find_rep(ll x)
    {
        if(x==par[x])
            return x;
         return par[x]=find_rep(par[x]);
    }
    int main()
    {
    //    freopen ("input.txt","r",stdin);
    //    freopen ("output.txt","w",stdout);
        string s1,s2;
        ll n,m,c,u,v,p1,p2;
        tin
        {
            ed.clear();
            mp.clear();
            st.clear();
            n=1;
            cin>>m;
            for(ll i=0;i<m;i++)
            {
                cin>>s1>>s2>>c;
                if(mp.find(s1)==mp.end())
                    mp[s1]=n++;
                 if(mp.find(s2)==mp.end())
                    mp[s2]=n++;
                u=mp[s1];
                v=mp[s2];
                ed.pb({c,{u,v}});
            }
           // cout<<n<<ses;
            for(ll i=1;i<n;i++)
                par[i]=i;
            sort(ed.begin(),ed.end());
            ll sum=0;
             for(ll i=0;i<m;i++)
             {
                 u=ed[i].second.first;
                 v=ed[i].second.second;
                 c=ed[i].first;

                 p1=find_rep(u);
                 p2=find_rep(v);
                 if(p1!=p2)
                 {
                     sum+=c;
                     par[p1]=p2;
                 }
             }

              for(int i=1;i<n;i++)
              {
                  st.insert(find_rep(i));
              }

          tout;
              if(st.size()!=1)
                cout<<"Impossible"<<ses;
              else cout<<sum<<ses;

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

