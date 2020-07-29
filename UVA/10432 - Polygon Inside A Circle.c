
/*Bismillah hir Rahmanur Rahim*/
/*Moksedur Rahman Sohan - Sust CSE -18|Chandler68||*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
double pi = 3.141592653589793;
int main()
{
    double r,sides,angle,area,th=0.01745329251;
    while(~scanf("%lf %lf",&r,&sides))
   {
       angle = (360.00/sides)*(pi/180.00);
       area=.5*r*r*sides*sin(angle);
       printf("%.3lf\n",area);
   }
    return 0;
}
/* 1. Check "&" in scanf
   2. Check limit of int and long long
   3. check brakets and array size and string
*/
