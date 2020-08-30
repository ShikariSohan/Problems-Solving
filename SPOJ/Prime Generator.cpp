    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define pb push_back
    #define M 1000020
    bool marked[M];
    bool sprime[M];
    bool isPrime(int n) {
      if (n < 2) return false;
      if (n == 2) return true;
      if (n % 2 == 0) return false;
      return marked[n] == false;
    }
    vector<int>v,vv;
    void sieve()
    {
      for (int i = 3; i * i <= M; i += 2) {
        if (marked[i] == false) {
          for (int j = i * i; j <= M; j += i + i) {
            marked[j] = true;
          }
        }
      }
      for(int i=1;i<M;i++)
        if(isPrime(i))
            v.push_back(i);
    }
    void seg(ll l,ll r)
    {
        if(l==1)
        sprime[0]=true;
        for(ll i=0;v[i]*v[i]<=r;i++)
        {
            ll base=(l/v[i])*v[i];
            if(base<l)
                base+=v[i];
            for(ll j=base;j<=r;j+=v[i])
            {
                sprime[j-l]=true;
            }
            if(base==v[i])
                sprime[base-l]=false;

        }
        //cout<<"dddd"<<endl;
        for(ll i=0;i<r-l+1;i++)
            if(sprime[i]==false)
        {
            vv.pb(i+l);
        }
    }
    int main()
    {
        sieve();
       ll t;
       scanf("%lld",&t);
       while(t--)
       {
           ll x,y;
           scanf("%lld",&x);
           scanf("%lld",&y);
           memset(sprime,false,sizeof(sprime));
           vv.clear();
           seg(x,y);
           for(ll i=0;i<vv.size();i++)
              cout<<vv[i]<<endl;
              cout<<endl;

       }

    }
