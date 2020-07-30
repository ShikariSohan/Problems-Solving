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
#define SZ 10000010

bitset<SZ+3> siv;
vector<ll> primes;

void sieve()
{
    ll i, j;
    siv[0]=1;
    siv[1]=1;
    siv[2]=0;
    for (i=2; i<SZ; i+=2)
        siv[i]=1;

    siv[2]=0;

     for (i=3; i<SZ; i+=2)
        if(siv[i]==0)
            for (j=i*i; j<SZ; j+=i)
                siv[j]=1;

    for (i=2; i<SZ; i++)
        if(siv[i]==0) primes.pb(i);
}

int main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
    sieve();
   tin
   {
       ll n;
       cin>>n;
       ll x,y=0;

       for(int i=0;primes[i]<= n/2;i++)
       {
           x=n-primes[i];
           if(siv[x]==0)
            y++;
       }

       tout;
       cout<<y<<ses;
   }

    return 0;
}
