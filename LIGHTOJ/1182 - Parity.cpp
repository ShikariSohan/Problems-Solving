    #include<stdio.h>
    #include<math.h>
    int main()
    {
       long long int x,y,z,j,sum,i;
       scanf("%lld",&z);
       for(i=1;i<=z;i++)
       {
          sum=0;
           scanf("%lld",&x);
           for(j=0;x!=0;j++)
           {
               j=x%2;
               x=(x/2);
               sum=sum+j;
           }
           if(sum%2==1)
            printf("Case %lld: odd\n",i);
           else printf("Case %lld: even\n",i);
       }
       return 0;
    }

