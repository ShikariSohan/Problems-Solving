

/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define mp make_pair
#define ses '\n'
#define stm istringstream
#define gcd __gcd
#define eps 1e-7
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
int main()
{
//   freopen ("input.txt","r",stdin);
//   freopen ("output.txt","w",stdout);
    tin
    {
        ll x,sum=0,r,y,k=0;
            cin>>x;
            if(x==1)
            {
                cin>>r;tout;
                if(r==1)
                    cout<<"Bob"<<ses;
                else cout<<"Alice"<<ses;
                continue;
            }
            y=x;tout;
            while(x--)
            {
                cin>>r;
                if(r==1)
                    k++;
                sum^=r;
            }
            if(k==y)
            {
                if(y%2)
                   cout<<"Bob"<<ses;
                else cout<<"Alice"<<ses;
                continue;
            }
            if(sum!=0)
                cout<<"Alice"<<ses;
              else  cout<<"Bob"<<ses;
    }
}
