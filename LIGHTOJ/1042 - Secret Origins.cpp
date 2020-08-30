
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector<ll>v;
void dctobi(ll x)
{
    if(!v.empty())v.clear();ll a,b;
    while(x!=0)
    {
        if(x%2==0)
            v.pb(0);
        else v.pb(1);
        x=x/2;
    }
    v.pb(0);
    reverse(v.begin(),v.end());
  next_permutation(v.begin(),v.end());
}
int bitodc()
{
    int i=0,sum=0,base=1;
    for(i=v.size()-1;i>=0;i--)
    {
        sum+=v[i]*base;
        base=base*2;
      //  cout<<sum<<"   jj"<<endl;
    }
    return sum;
}
int main()
{
    int x,y,i,k,l;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {

       cin>>y;
        dctobi(y);
        k=bitodc();
       printf("Case %d: %d\n",i,k);

    }
    return 0;
}
