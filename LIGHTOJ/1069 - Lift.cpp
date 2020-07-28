    #include<stdio.h>
    #include<math.h>
    int main()
    {
       int x,y,z,f,i;
       scanf("%d",&z);
       for(i=1;i<=z;i++)
       {
           scanf("%d %d",&x,&y);
           f=19+4*(abs(x-y))+4*x;
           printf("Case %d: %d\n",i,f);
       }
       return 0;
    }

