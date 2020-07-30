

/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
#define eps 1e-7
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define SZ 10000000

ll divc(ll x)
{
   ll k=0,y;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            y=x/i;
            if(y==i)
                k++;
            else k+=2;
        }
    }
    return k;
}
bool cmp(pair<ll,ll> a,pair<ll,ll> b) {
    if (a.first < b.first) {
        return true;
    }
    else if (a.first == b.first && a.second > b.second) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
   vector<pair<ll,ll> > v;
    for(ll i=1;i<=1000;i++)
    {

        v.pb({divc(i),i});
    }
    sort(v.begin(),v.end(),cmp);
  tin
  {
      ll x;
      cin>>x;
     tout; cout<<v[x-1].second<<ses;
  }

    return 0;
}
