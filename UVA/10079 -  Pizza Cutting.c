
#include <stdio.h>

int main()
{
    long int n,a;
    while(scanf("%ld", &n)==1)
    {
        if( n>=0 && n<=210000000)
        {
            a= ((n*(n+1))/2)+1;
            printf("%ld\n", a);
        }
        else if(n<0)
        break;
    }
    return 0;
}
