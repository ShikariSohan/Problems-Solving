#include<stdio.h>
int main()
{
    int x,y,c,d;
    scanf("%d",&d);
    while(d--){
    scanf("%d %d",&x,&y);
    if(y%x!=0)
        printf("-1\n");
    else
    {
        printf("%d %d\n",x,y);
    }}
    return 0;
}
