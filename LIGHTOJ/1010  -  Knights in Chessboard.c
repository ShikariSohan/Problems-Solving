/*Bismillah hir Rahmanur Rahim*/
/*Moksedur Rahman Sohan - Sust CSE -18|Chandler68||*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int test,x,y,i,m,r;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d %d",&x,&y);
        if(x==1 || y==1)
         printf("Case %d: %d\n",i+1,(x*y));
         else if(x==2 || y==2)

        {
            if(x==2) m=y;
            else     m=x;
            if(m%4 == 1)      r = m+1;
            else if(m%4 == 2) r = m+2;
            else if(m%4 == 3) r = m+1;
            else if(m%4 == 0) r = m;
            printf("Case %d: %d\n",i+1,r);
        }

       else
       {
                if((x*y)%2==0)
    printf("Case %d: %d\n",i+1,(x*y)/2);
    else printf("Case %d: %d\n",i+1,((x*y)/2)+1);
       }

    }
    return 0;
}
/* 1. Check "&" in scanf
   2. Check limit of int and long long
   3. check brakets and array size and string
*/
