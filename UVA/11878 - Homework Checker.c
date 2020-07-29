/*Bismillah hir Rahmanur Rahim*/
/*Moksedur Rahman Sohan - Sust CSE -18|Chandler68||*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int x,y,z,k=0,i,l;
    char a,e,s[4];
    while(~scanf("%d %c %d %c %s",&x,&a,&y,&e,&s))
    {
        if(s[0]=='?')
            continue;
        else
        {
            l=strlen(s);
            z=0;
            for (i=0;i<l;i++)
                z=z*10+s[i]-'0';
            if(a=='+')
                x=x+y;
            else x=x-y;
            if(x==z)
                k++;
        }

    }
    printf("%d\n",k);
    return 0;
}
/* 1. Check "&" in scanf
   2. Check limit of int and long long
   3. check brakets and array size and string
*/


