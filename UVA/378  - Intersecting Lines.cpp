

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
ll lcm(ll x,ll y)
{
    return ((x/gcd(x,y))*y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":\n";
#define spc printf(" ");
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100015
#define EPS 1e-6
int cmp(double x)
{
    if(fabs(x)<EPS)
        return 0;
    return x<0?-1:1;
}
struct PT
{
    double x,y;
    PT()
    {
        x=y=0;
    }
    PT(double a,double b)
    {
        x=a,y=b;
    }
    PT operator+(const PT &a) const
    {
        return PT(x+a.x,y+a.y);
    }
    PT operator-(const PT &a) const
    {
        return PT(x-a.x,y-a.y);
    }
    PT operator*(double a) const
    {
        return PT(x*a,y*a);
    }
    PT operator/(double a) const
    {
        return PT(x/a,y/a);
    }
    double val()
    {
        return sqrt(x*x+y*y);
    }
    PT unit()
    {
        return (*this)/val();
    }
    void pin()
    {
        scanf("%lf %lf",&x,&y);
    }
    void pout()
    {
        printf("%.2f %.2f\n",x,y);
    }
};
double dist(PT a,PT b)
{
    return (a-b).val();
}
double dot(PT a,PT b)
{
    return a.x*b.x+a.y*b.y;
}
double cross(PT a,PT b)
{
    return a.x*b.y-a.y*b.x;
}
struct line
{
    double a,b,c;
    void val(PT x,PT y)
    {
        a=x.y-y.y;
        b=y.x-x.x;
        c=(x.x-y.x)*x.y+(y.y-x.y)*x.x;
    }
};
int main()
{
    ///shikariIsListening();
    //PaglaGhora;
    PT a,b,c,d,n;
    line p,q;
    double x,y;
    cout<<"INTERSECTING LINES OUTPUT"<<ses;
    tin
    {
        a.pin(),b.pin(),c.pin(),d.pin();
        if(cmp(cross(a-b,a-c))==0&&cmp(cross(a-b,a-d)==0))
            cout<<"LINE"<<ses;
        else if(cmp(cross(a-b,c-d))==0)
            cout<<"NONE"<<ses;
        else
        {
            p.val(a,b);
            q.val(c,d);
            n.x=((p.b*q.c-q.b*p.c)*1.0)/((p.a*q.b-q.a*p.b)*1.0) ;
            n.y=((p.c*q.a-q.c*p.a)*1.0)/((p.a*q.b-q.a*p.b)*1.0) ;
            cout<<"POINT ";
            n.pout();
        }

    }
    cout<<"END OF OUTPUT"<<ses;

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
