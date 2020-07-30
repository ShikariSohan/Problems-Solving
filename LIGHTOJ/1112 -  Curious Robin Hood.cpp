
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
#define tout cout<<"Case "<<o<<":"<<ses;
#define  sf scanf
#define  pf printf
#define SZ 100000
#define INF 100000000+7
int ara[SZ],tree[SZ*4];

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
   tree[node]=tree[l]+tree[r];
}


int query(int node,int a,int b,int c,int d)
{
    if(c>b||d<a)
    return 0;
    if(a>=c&&b<=d){
                return tree[node];
    }
    int mid,l,r;
    mid=(a+b)/2;
    l=2*node;
    r=2*node+1;
    int p1,p2;
    p1=query(l,a,mid,c,d);
    p2=query(r,mid+1,b,c,d);
    return p1+p2;

}

void update(int node,int a,int b,int c,int d)
{
    if(c>b||c<a)
    return;
    if(a>=c&&b<=c){
      tree[node]+=d;
      return;
    }
    int mid,l,r;
    mid=(a+b)/2;
    l=2*node;
    r=2*node+1;
    update(l,a,mid,c,d);
    update(r,mid+1,b,c,d);
    tree[node]=tree[l]+tree[r];
}

int main()
{

tin{

    int n,q;
    sf("%d %d",&n,&q);
    for(ll i=0;i<n;i++)
    scanf("%d",&ara[i]);
    in(1,0,n-1);
    tout;
    while(q--){
        int x,y,p,z,v;
        sf("%d",&x);
       if(x==1){
        sf("%d",&y);
        p=query(1,0,n-1,y,y);
        pf("%d\n",p);
        update(1,0,n-1,y,-p);
       }
       else if(x==2){
        sf("%d %d",&z,&v);
        update(1,0,n-1,z,v);
       }
       else {
        int s,t,u;
        sf("%d %d",&s,&t);
        u=query(1,0,n-1,s,t);
        pf("%d\n",u);
       }
    }


}
return 0;
}
