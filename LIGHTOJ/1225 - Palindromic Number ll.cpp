    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string a,b;
        int t,i;
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>a;
            b=a;
            reverse(a.begin(),a.end());
            if(a==b)
                printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);
        }
    }

