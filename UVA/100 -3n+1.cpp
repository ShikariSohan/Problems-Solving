#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long long int koyta(long long int n)
{
    long long int k=1;
    while(1)
    {
        if(n==1) break;
        if(n%2==0) {n=n/2;k++;}
    else {n=3*n+1;k++;}
    }
    return k;

}
int main()
{
   long long int i,j,k;
   while(~scanf("%lld %lld",&i,&j))
   {
       long long int k=0,n,m,l;
       m=min(i,j);
       l=max(i,j);
       for(;m<=l;m++)
       {
           n=koyta(m);
           k=max(n,k);
       }
       cout<<i<<" "<<j<<" "<<k<<endl;
   }

    return 0;
}
