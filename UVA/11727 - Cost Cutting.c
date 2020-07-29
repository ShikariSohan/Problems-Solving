#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,z,i,k,d,e,f;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x>y && x>z)
            d=x;
        else if(y>x && y>z)
            d=y;
        else d=z;
        if(x<y && x<z)
            e=x;
        else if(y<x && y<z)
            e=y;
        else e=z;
        f=(x+y+z)-d-e;
        printf("Case %d: %d\n",i,f);
    }

    return 0;
}
