    #include<stdio.h>
    int main()
    {
        int a,b,x,z,i;
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            scanf("%d %d",&a,&b);
            z=a+b;
            printf("Case %d: %d\n",i+1,z);
        }
        return 0;
    }

