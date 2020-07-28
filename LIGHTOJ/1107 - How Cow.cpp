    #include<stdio.h>
    int main()
    {
        int x1,y1,x2,y2,t1,t2,a,b,z;
        scanf("%d",&t1);
        for(int i=1;i<=t1;i++)
           {
               scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&t2);
               printf("Case %d:\n",i);
               for(int j=0;j<t2;j++)
               {
                   scanf("%d %d",&a,&b);
                   if(x1<a&&x2 >a&& y1<b&&b<y2)
                    printf("Yes\n");
                   else printf("No\n");
               }

           }
        return 0;
    }

