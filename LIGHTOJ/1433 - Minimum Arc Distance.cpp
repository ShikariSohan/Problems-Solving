    #include<bits/stdc++.h>
    #include<cmath>
    using namespace std;
    int main()
    {
        int t,i;
        cin>>t;
        double x,y,ox,oy,ax,ay,bx,by,th,s;
        for(i=1;i<=t;i++)
        {
            cin>>ox>>oy>>ax>>ay>>bx>>by;
            x = sqrt ((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
            y= sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
            th=acos((x*x+x*x-y*y)/(2*x*x));
            s=x*th;
            printf("Case %d: %.9lf\n",i,s);
        }

        return 0;
    }

