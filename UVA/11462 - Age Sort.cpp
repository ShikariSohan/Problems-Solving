#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int x,y,n,y1,i,z=0,k;

    while(1)
  {
      scanf("%lld",&x);
    long long int a[x];
    long long int n = sizeof(a)/sizeof(a[0]);
    for(y=0;y<x;y++)
        scanf("%lld",&a[y]);
   if(x==0) break;
   else{
    for(i=0;i<x;i++)
{
    sort(a, a+n);

    for (i = 0; i < n-1; ++i)
        printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
   }
   }

}   return 0;}
