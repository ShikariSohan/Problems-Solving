
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define  sf scanf
#define  pf printf
#define SZ 100050
#define INF 100000000+7
int ara[SZ],tree[SZ*4],tree2[SZ*4];

void in(int node,int a,int b)
{
   if(a==b)
    {
    tree[node] = ara[a];
    return;
    }
   int mid,l,r;
   mid=(a+b)/2;
   l=2*node;
   r=2*node+1;
   in(l,a,mid);
   in(r,mid+1,b);
   tree[node]=max(tree[l],tree[r]);
}
void in1(int node,int a,int b)
{
   if(a==b)
    {
    tree2[node]=ara[a];
    return;
    }
   int mid,l,r;
   mid=(a+b)/2;
   l=2*node;
   r=2*node+1;
   in1(l,a,mid);
   in1(r,mid+1,b);
   tree2[node]=min(tree2[l],tree2[r]);
}
ll qumin(int node,int b,int e,int i,int j)
{
    if(j<b || e<i)
        return INF;
    if(i<=b && e<=j)
        return tree2[node];
    int mid,l,r;
   mid=(e+b)/2;
   l=2*node;
   r=2*node+1;
   ll p =qumin(l,b,mid,i,j);
   ll q=qumin(r,mid+1,e,i,j);
   return min(p,q);
}
ll qumax(int node,int b,int e,int i,int j)
{
    if(j<b || e<i)
        return -INF;
    if(i<=b && e<=j)
        return tree[node];
    int mid,l,r;
   mid=(e+b)/2;
   l=2*node;
   r=2*node+1;
   ll p =qumax(l,b,mid,i,j);
   ll q=qumax(r,mid+1,e,i,j);
   return max(p,q);
}
int main()
{

   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
 tin
 {
     ll n,d,i,p,q,dif=-999999999;
     cin>>n>>d;
     for(i=0;i<n;i++)
     scanf("%d",&ara[i]);
     in(1,0,n-1);
     in1(1,0,n-1);
    // cout<<" max "<<ses;
//     for(i=0;i<8;i++)
//        cout<<i<<" "<<tree[i]<<ses;
//        cout<<" min "<<ses;
//      for(i=1;i<8;i++)
//        cout<<i<<" "<<tree2[i]<<ses;

     for(i=0;i+d-1<n;i++)
     {
         p=qumin(1,0,n-1,i,i+d-1);
         q=qumax(1,0,n-1,i,i+d-1);
       //cout<<p<<" d "<<q<<ses;

         ll x=q-p;
         if(x>dif)
            dif=x;
     }
     tout;
     printf("%lld\n",dif);

 }
return 0;
}
