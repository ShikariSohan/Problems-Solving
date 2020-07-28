    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int t,i,j,a,b;
        scanf("%d",&t);
        for(i=0; i<t; i++)
        {
           scanf("%d",&a);
           b=a/2;
           printf("%d %d\n",b,a-b);
        }
        return 0;
    }

