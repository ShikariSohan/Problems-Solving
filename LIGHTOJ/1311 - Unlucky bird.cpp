    #include <stdio.h>
    int main()
    {
        int tst, i;
        double v1, v2, v3, a1, a2, t, t1, t2, fly, d1, d2;
        scanf("%d", &tst);
        for(i=1; i<=tst; i++)
        {
            scanf("%lf%lf%lf%lf%lf", &v1, &v2, &v3, &a1, &a2);
            t1 = v1/a1;
            t2 = v2/a2;
            t = t1;
            if(t2>t1) t = t2;
            d1 = (v1*v1)/(2*a1);
            d2 = (v2*v2)/(2*a2);
            fly = t*v3;
            printf("Case %d: %lf %lf\n", i, d1+d2, fly);
        }
        return 0;
    }
