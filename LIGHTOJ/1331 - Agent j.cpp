    #include<bits/stdc++.h>
    using namespace std;
    const double eps = 1e-9;
    int main()
    {
       int x,i;
        cin>>x;
        for(i=1;i<=x;i++)
        {
        double r1,r2,r3,a,b,c,a1,b1,c1,s,tri,area;
       cin>>r1>>r2>>r3;
        a=r2+r3;
        b=r1+r3;
        c=r1+r2;
        s=(a+b+c)/2.0;
        tri=sqrt(s*(s-a)*(s-b)*(s-c));
        a1=acos((b*b+c*c-a*a)/(2*b*c));
        b1=acos((c*c+a*a-b*b)/(2*a*c));
        c1=acos((a*a+b*b-c*c)/(2*a*b));

        area=tri-(.5*r1*r1*a1)-(.5*r2*r2*b1)-(.5*r3*r3*c1);
        printf("Case %d: %.8lf\n",i,area+eps);
        }

        return 0;
    }

