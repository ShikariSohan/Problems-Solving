/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define pb push_back
#define ses '\n'
#define gcd __gcd
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define SZ 10000010
    vector<ll>v;
void print()
{
    for(ll i=0;i<v.size();i++)
        cout<<v[i];
}
int main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
    ll a,b,c,k=0;

    while(cin>>a)
    {
        if(a==0)
            return 0;
            k=0;
            v.clear();
        while(a!=0)
        {
            if(a%2==1)
            {v.pb(1);k++;}
            else v.pb(0);
            a=a/2;
        }
        reverse(v.begin(),v.end());
        cout<<"The parity of ";
        print();
        cout<<" is "<<k<<" (mod 2)."<<ses;
    }
    return 0;
}
