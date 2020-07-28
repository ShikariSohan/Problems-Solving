    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        double a,b,c,d,base,s,area,t,k;
        int i;
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>a>>b>>c>>d;
            if(a<c)
              swap(a,c);
            base=a-c;
            s=(b+d+base)/2.0;
            k=sqrt(s*(s-base)*(s-b)*(s-d));
            s=(2.0*k)/base;
            area=.5*s*(a+c);
            printf("Case %d: %.9lf\n",i,area);
        }

    }

