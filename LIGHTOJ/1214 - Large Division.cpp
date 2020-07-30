#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,i,mod,b,j;
    char x;
    string a;
    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>a>>b;
      mod=0;
     long long int l=a.size();
      j=a[0]=='-'?1:0;
      b=b<0?b*(-1):b;
      for(;j<l;j++)
      {
          mod=(a[j]-'0')+mod*10;
          mod=mod%b;
      }
      if(mod==0)
          printf("Case %lld: divisible\n",i+1);
      else   printf("Case %lld: not divisible\n",i+1);
    }
    return 0;
}
