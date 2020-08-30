    #include<stdio.h>
    int main()
    {
        int x,y;
        while(~scanf("%d",&x))
        {
            if(x==42)
                break;
            else
                printf("%d\n",x);
        }
        return 0;
    }
