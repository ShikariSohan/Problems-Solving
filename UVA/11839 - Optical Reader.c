/*Bismillah hir Rahmanur Rahim*/
/*Moksedur Rahman Sohan - Sust CSE -18|Chandler68||*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,n,ans,count,a[6];
    while(~scanf("%d",&n))
    {
        if(n==0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                count=0;
                for(j=0; j<5; j++)
                {
                    scanf("%d",&a[j]);
                    if(a[j]<=127)
                    {
                        count++;
                        ans=j+1;
                    }
                }
                if(count==1)
                {
                    if(ans==1)
                        printf("A\n");
                    else if(ans==2)
                        printf("B\n");
                    else if(ans==3)
                        printf("C\n");
                    else if(ans==4)
                        printf("D\n");
                    else if(ans==5)
                        printf("E\n");
                }
                else
                    printf("*\n");
            }
        }
    }
    return 0;
}
/* 1. Check "&" in scanf
   2. Check limit of int and long long
   3. check brakets and array size and string
*/
