
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
int main()
{
    int t, i;
    double a, b;
    cin>>t;
    for(i = 1;i<=t;i++)
    {
        scanf("%lf : %lf", &a, &b);
        double r = sqrt(b*b + a*a)/2.0;
        double theta = acos((r*r + r*r - b*b)/(2.0 * r * r));
        double s = r * theta;
        double x = 400.0/(2.0*a + 2.0*s);
        printf("Case %d: %.10lf %.10lf\n", i, x*a, x*b);
    }
    return 0;
}
