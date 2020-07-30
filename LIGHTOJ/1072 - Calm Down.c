#include<stdio.h>
#include<math.h>
#define pi 3.141592654
int main()
{
    int x,i,j;
    double R,r,val;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
      scanf("%lf %d",&R,&j);
      val=((360/((double)j*2))*pi)/180;
      r=(sin(val)*R)/(1+sin(val));
      printf("Case %d: %lf\n",i,r);
    }
    return 0;

}
