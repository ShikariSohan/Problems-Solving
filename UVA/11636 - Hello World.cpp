#include<stdio.h>
int main()
{
    int x,i=0,j=1,k=0;
    while(1)
    {
        scanf("%d",&x);
        k++;
        if(x<0)
            break;
        else
        {

            while(j<x)
            {
                j=j*2;
                i++;
            }
                printf("Case %d: %d\n",k,i);
        }
        i=0;
        j=1;
    }
      return 0;
}
