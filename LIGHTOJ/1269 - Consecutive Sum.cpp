
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
#define sz 100015
struct tr
{
    bool mark;
    tr* a[2];
    ll num;
    tr()
    {
        mark=false;
        a[0]=NULL;
        a[1]=NULL;
        num=0;
    }
}*root;
void ins(string s,ll x)
{
    tr* cur=root;
    ll szz=s.size();
    for(ll i=0; i<szz; i++)
    {
        ll x=s[i]-'0';
        if(cur->a[x]==NULL)
        {
            cur->a[x]=new tr();
        }
        cur=cur->a[x];
    }
    cur->mark=true;
    cur->num=x;
}
ll query(string s)
{
    tr* cur=root;
    ll szz=s.size();

    for(ll i=0; i<szz; i++)
    {
       if(s[i]=='1')
       {
           if(cur->a[0]!=NULL)
           {
                cur=cur->a[0];

           }
           else
           {
               cur=cur->a[1];
           }
       }
       else
       {
            if(cur->a[1]!=NULL)
           {
                cur=cur->a[1];
           }
           else
           {
               cur=cur->a[0];
            }
       }
    }
    return cur->num;

}
ll query2(string s)
{
    tr* cur=root;
    ll szz=s.size();

    for(ll i=0; i<szz; i++)
    {
       if(s[i]=='1')
       {
           if(cur->a[1]!=NULL)
           {
                cur=cur->a[1];

           }
           else
           {
               cur=cur->a[0];
           }
       }
       else
       {
            if(cur->a[0]!=NULL)
           {
                cur=cur->a[0];
           }
           else
           {
               cur=cur->a[1];
            }
       }
    }
    return cur->num;

}
void del(tr* cur)
{
    for (int i=0;i<2;i++)
        if (cur->a[i])
            del(cur->a[i]);
    delete (cur);
}
string makebinary(ll x)
{
    string s;
    ll p;
    for(ll i=0;i<=65;i++)
    {
    if(x%2)
        s.pb('1');
    else s.pb('0');
      x=x/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    shikariIsListening();
   //PaglaGhora;

   tin
   {
       ll n,x;
       root = new tr();
       in(n);
       ll ans=0;
       ll minn=inf;
       ll temp=0;
       ll prefix=0;
       ins(makebinary(0LL),0LL);
       for(ll i=0;i<n;i++)
       {
           in(x);
           prefix^=x;
           temp=prefix^query(makebinary(prefix));
           ans=max(ans,temp);
           temp=prefix^query2(makebinary(prefix));
           minn=min(temp,minn);
           ins(makebinary(prefix),prefix);
       }
       tout;
       printf("%lld %lld\n",ans,minn);
       del(root);
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
