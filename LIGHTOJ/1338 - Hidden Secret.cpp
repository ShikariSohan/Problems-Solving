#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    string a,b;

    int t,i,j,k,l1,l2;
    cin>>t; getchar();
    for(i=1;i<=t;i++)
    {
      vector<char>c;
     vector<char>d;
        getline(cin,a);
        getline(cin,b);
        l1=a.size();l2=b.size();
        for(j=0;j<l1;j++)
        {
            if(a[j]>=65 && a[j]<=90)
            {
                a[j]=tolower(a[j]);
                c.pb(a[j]);
            }
            else if(a[j]>=97 && a[j]<=122)
            {
                c.pb(a[j]);
            }
        }
        for(j=0;j<l2;j++)
        {
            if(b[j]>=65 && b[j]<=90)
            {
                b[j]=tolower(b[j]);
                d.pb(b[j]);
            }
            else if(b[j]>=97 && b[j]<=122)
            {
                d.pb(b[j]);
            }
        }
       sort(c.begin(),c.end());
       sort(d.begin(),d.end());

       if(c==d)
        printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);

}}
