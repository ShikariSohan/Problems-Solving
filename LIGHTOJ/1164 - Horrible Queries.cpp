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
    #define tout cout<<"Case "<<o<<":"<<ses;
    #define spc printf(" ");
    ll a[100050];
    struct T
    {
        ll sum=0;
        ll prop=0;
    }tree[400050],demo;
    void update(ll node,ll b,ll e,ll i,ll j,ll x)
    {
        if(i>e||j<b)
            return ;
        if(b >= i && e <= j)
        {
            tree[node].sum+=(x*(e-b+1));
            tree[node].prop+=x;
            return;
        }
        ll mid=(b+e)/2;
        update(node*2,b,mid,i,j,x);
        update(node*2+1,mid+1,e,i,j,x);
        tree[node].sum = tree[node*2].sum + tree[node*2+1].sum + (e - b + 1) * tree[node].prop;
    }
    ll query(ll node,ll b,ll e,ll i,ll j,ll x)
    {
        if(i>e||j<b)
            return 0;
        if(b >= i && e <= j)
        {

            return tree[node].sum+x*(e-b+1);
        }
        ll mid=(b+e)/2;
        ll p=query(node*2,b,mid,i,j,x+tree[node].prop);
        ll q=query(node*2+1,mid+1,e,i,j,x+tree[node].prop);
        return p+q;
    }
    int main()
    {

       demo.sum=0;
       demo.prop=0;
        tin
        {
            ll n,p,q,x,y,z;

            in(n);
            in(x);
            for(ll i=0;i<=400050;i++)
            tree[i]=demo;
            tout;
            while(x--)
            {
               in(p);
                if(p==1)
                {
                    in(q);
                    in(y);
    ll pp=query(1LL,0LL,n-1,q,y,0LL);
                    out(pp);
                }
                else
                {
                    in(q);
                    in(y);
                    in(z);
                    update(1LL,0LL,n-1,q,y,z);
                }

            }
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

