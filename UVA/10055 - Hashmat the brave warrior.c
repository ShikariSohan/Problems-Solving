#include<stdio.h>
int main()
{
    long long int x,y,z;
    while(~scanf("%lld %lld",&x,&y))
    {
        if(x>y)
        {
            z=x-y;
            printf("%lld\n",z);
        }
        else
        {
            z=y-x;
            printf("%lld\n",z);
        }
    }
    return 0;
}
