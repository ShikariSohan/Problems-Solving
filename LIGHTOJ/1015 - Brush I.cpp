    #include<stdio.h>
    int main()
    {
        int x,y,k,sum=0,i;
        scanf("%d",&x);
        for(i=1;i<=x;i++)
        {
            scanf("%d",&y);
            for(int j=0;j<y;j++)
            {
                scanf("%d",&k);
               if(k>0) sum=sum+k;
            }
             printf("Case %d: %d\n",i,sum);
             sum=0;
        }

        return 0;
    }
