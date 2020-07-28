    #include<stdio.h>
    int main()
    {
        double a,b,c,x,j;
        int l;
        scanf("%d",&l);
        for(int i=1;i<=l;i++)
        {
            scanf("%lf%lf%lf%lf",&a,&b,&c,&x);
            j=a*sqrt(x/(x+1));
            printf("Case %d: %lf\n",i,j);
        }
        return 0;
    }
