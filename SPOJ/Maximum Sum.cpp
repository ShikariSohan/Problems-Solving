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
    #define ek(x) __builtin_popcount(x)
    #define ses '\n'
    #define stm istringstream
    #define sob(x) x.begin(),x.end()
    #define ghora ios_base::sync_with_stdio(0);cin.tie(0);
    #define gcd __gcd
    ll lcm(ll x,ll y)
    {
        return (x*y)/gcd(x,y);
    }
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    #define M 1000000
    struct Tre
    {
        ll sum;
        ll prob;
    } tree[M*4],z,dummy;
    ll a[M],yo[4];
    Tre fm(Tre x, Tre y)
    {
        yo[0]=x.prob;
        yo[1]=x.sum;
        yo[2]=y.sum;
        yo[3]=y.prob;
        sort(yo,yo+4);
        z.prob=yo[2];
        z.sum=yo[3];
        return z;
    }
    void build(ll node,ll b,ll e)
    {
        if(b==e)
        {
            tree[node].sum=a[b];
            tree[node].prob=-232323;
            return;
        }
        ll lef=2*node;
        ll rig=lef+1;
        ll mid=(b+e)/2;
        build(lef,b,mid);
        build(rig,mid+1,e);
        tree[node]=fm(tree[lef],tree[rig]);
    }
    Tre query(ll node,ll b,ll e,ll i,ll j)
    {
        if(b>j || e<i)
            return dummy;
        if(b>=i && e<=j)
            return tree[node];
        ll lef=2*node;
        ll rig=lef+1;
        ll mid=(b+e)/2;
        Tre x=query(lef,b,mid,i,j);
        Tre y=query(rig,mid+1,e,i,j);
        return fm(x,y);
    }
    void update(ll node,ll b,ll e,ll i,ll val)
    {
        if(b>i || e<i)
            return;
        if(b>=i && e<=i)
        {
           tree[node].sum=val;
           tree[node].prob=-1212313;
            return;
        }
        ll lef=2*node;
        ll rig=lef+1;
        ll mid=(b+e)/2;
        update(lef,b,mid,i,val);
        update(rig,mid+1,e,i,val);
        tree[node]=fm(tree[lef],tree[rig]);
    }
    int main()
    {
        //freopen ("input.txt","r",stdin);
        //freopen ("output.txt","w",stdout);
        ll n;
        dummy.sum=-233333;
        dummy.prob=-233333;
        scanf("%lld",&n);
        for(ll i=0; i<n; i++)
            scanf("%lld",&a[i]);
        build(1,0,n-1);
        ll y,z,i,q;
        char x[12];
        scanf("%lld",&q);
        Tre yoo;
        while(q--)
        {
            scanf("%s",x);
            if(x[0]=='Q')
            {
                scanf("%lld %lld",&y,&z);
                yoo=query(1,0,n-1,y-1,z-1);
                printf("%lld\n",yoo.sum+yoo.prob);
            }
            else
            {
                scanf("%lld %lld",&y,&z);
                 update(1,0,n-1,y-1,z);
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
