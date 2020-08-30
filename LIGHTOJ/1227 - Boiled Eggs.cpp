#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>p>>q;
        int sum[n]={},d=0;
         for(j=0;j<n;j++)
         {
             cin>>k;
             d=d+k;
             sum[j]=d;
         } int f=0;
         for(j=0;j<n;j++)
         {
             if(f==p)
                break;
             if(sum[j]>q)
                break;
             else f++;
         }
         printf("Case %d: %d\n",i,f);
    }
}
