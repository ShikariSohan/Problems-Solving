#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int x,i,N;
    double R,r,val,I,K;
    while( cin >> R>> N )
    {
//      val=((360/((double)j*2))*pi)/180;
//      r=(sin(val)*R)/(1+sin(val));
      if( N == 1 )
        {
            printf("%.10lf %.10lf %.10lf\n",R,0.0,0.0);
            continue ;
        }
        if( N == 2 )
        {
            printf("%.10lf %.10lf %.10lf\n",R/2.00,0.0,pi*R*R/2.00);
            continue ;
        }
        double angle = pi / N ;
        double alpha = sin( angle );
        double r = ( R * alpha ) / ( 1.00 + alpha );
        double a = 2.00 * r ;
        double H = sqrt( (R-r) * (R-r) - r*r ) ;
        double I = N * r * (  H - (pi/2 - angle)*r );
        double E = pi * R*R - I - ( N * pi * r * r );
        printf("%.10lf %.10lf %.10lf\n",r,I,E);
     }
    return 0;

}
