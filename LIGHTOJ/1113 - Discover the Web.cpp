#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cur,nw,cmd;
    int  i,j,t,u,v,f,g,h;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        stack<string>a;
        stack<string>b;
        b.push("http://www.lightoj.com/");
        printf("Case %d:\n",i);
        while(1)
        {
            cin>>cmd;
            if(cmd=="QUIT")
                break;
            else if(cmd=="VISIT")
            {
                cin>>nw;
                b.push(nw);
                cur=b.top();
                cout<<nw<<endl;
                if(!a.empty())
              {
                  while(!a.empty())
                    a.pop();
              }
            }
            else if(cmd=="BACK")
            {
                if(b.size()<=1)
                    cout<<"Ignored"<<endl;
                else
                {
                     a.push(cur);
                    b.pop();
                    cur=b.top();
                    cout<<cur<<endl;
                }
            }
            else if(cmd=="FORWARD")
            {
                if(a.size()==0)
                    cout<<"Ignored"<<endl;
                else
                {
                    cur=a.top();
                     b.push(cur);
                    a.pop();
                    cout<<cur<<endl;
                }
            }
        }
    }
    return 0;
}
