
/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
int main()
{
    double l,w,h,t;
    double d,v;
    while(cin>>l>>w>>h>>t)
    {
        d=l*tan(t*pi/180.0);
        if(d > h) v=0.5*h*h*l*w/d;
        else v=l*w*((h)-(d*0.5));
        printf("%.3lf mL\n", v);
    }
    return 0;
}
