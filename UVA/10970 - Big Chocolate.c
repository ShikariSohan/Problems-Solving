#include<stdio.h>
int main()
{
    int x,y,z;
    while(~(scanf("%d %d",&x,&y)))
    {
        z=(x*y)-1;
        printf("%d\n",z);
    }
    return 0;
}
