
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int mx,mx1;
    mx=mx1=-2147483648;
    for(i=0;i<n;i++)
    {
       int x;
       scanf("%d",&x);
       if(x>mx)
       {
           mx1=mx;
           mx=x;
       }
       else if(x>mx1&&x!=mx)
       {
           mx1=x;
       }
    }
    if(mx1==-2147483648)
        printf("Sorry");
    else printf("%d\n",mx1);


}
