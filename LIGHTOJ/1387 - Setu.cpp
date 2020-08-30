    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,i,j,sum,x,y;
        string a;
        cin>>t;
        for(i=1;i<=t;i++)
        {
           sum=0;
           printf("Case %d:\n",i);
           cin>>x;
           for(j=0;j<x;j++)
           {
               cin>>a;
               if(a[0]=='d')
               {
                   cin>>y;
                   sum+=y;
               }
              if(a[0]=='r')
                cout<<sum<<endl;
           }
        }
    }

