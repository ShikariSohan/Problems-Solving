#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int i,t;
    cin>>t;
    for(i = 1; i<= t; i++){
        double r1, r2, h, p;
        cin>>r1>>r2>>h>>p;

        r1 = r2 + ((r1 - r2)*p)/h;
        double ans = (PI/3.0) * p * ((r1*r1) + (r2*r2) + (r1*r2));

        printf("Case %d: %.9lf\n",i, ans);
    }

}
