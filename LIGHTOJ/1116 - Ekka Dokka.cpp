    #include<bits/stdc++.h>
    #define ll long long int
    #define ses '\n'
    #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
    #define tout cout<<"Case "<<o<<": ";
    using namespace std;
    int main()
    {
        ll i,t,w,m,n;
      tin
        {
            cin>>w;
            m=2;tout;
            if(w%2==1)
            {
                printf("Impossible\n",i);
                continue;
            }
            while(1)
            {
                n=w/m;
                if(n%2==1)
                {
                    if(n*m==w)
                  {
                       printf("%lld %lld\n",n,m);break;
                  }
                }
                m+=2;
            }
        }
    }

