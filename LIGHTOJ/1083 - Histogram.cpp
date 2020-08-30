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
    struct T{
        ll m=0;
        ll i=0;
        }tree[90000],demo,oo;
    ll a[40000],n;
    void build(ll node,ll b,ll e)
    {
        if(b==e)
        {
             tree[node].m=a[b];
             tree[node].i=b;
               return ;
        }
        ll mid=(b+e)/2;
        ll le=node*2;
        ll ri=le+1;
        build(le,b,mid);
        build(ri,mid+1,e);
        if(tree[le].m<tree[ri].m)
        {
                tree[node].m=tree[le].m;
                tree[node].i=tree[le].i;
        }
        else
        {
                tree[node].m=tree[ri].m;
                tree[node].i=tree[ri].i;
        }


    }
    T qu(ll node,ll b,ll e, ll i, ll j)
    {
        if (i > e || j < b)
            return demo;
        if (b >= i && e <= j)
            return tree[node];
        ll Left = node * 2;
        ll Right = node * 2 + 1;
        ll mid = (b + e) / 2;
        T p1 = qu(Left, b, mid, i, j);
        T p2 = qu(Right, mid + 1, e, i, j);
        if(p1.m<p2.m)
            return p1;
        else return p2;
    }
    ll bs(ll b,ll e)
    {
        if(b>e)
            return 0;
        if(b==e)
            return a[b];
        T z=qu(1,0,n-1,b,e);
        ll a=(z.m)*(e-b+1);
        ll a1=bs(b,z.i-1);
        ll a2=bs(z.i+1,e);
        return max(a,max(a1,a2));
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        demo.i=455;
        demo.m=inf;
         tin
         {

             in(n);
             for(ll i=0;i<n;i++)
                in(a[i]);
             build(1,0,n-1);
            ll x=bs(0,n-1);
            tout;
            cout<<x<<ses;

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



