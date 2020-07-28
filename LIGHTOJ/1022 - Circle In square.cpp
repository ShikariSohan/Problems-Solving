    #include<stdio.h>
    #define k 1e-9
    #define pi 2*acos(0.0)
    int main()
    {
        int x;
        double y,z;
        scanf("%d",&x);
        for(int i=1;i<=x;i++)
        {
            scanf("%lf",&y);
            z=(4*y*y)-(pi*y*y);
            printf("Case %d: %0.2lf\n",i,z+k);

        }
        return 0;
    }
