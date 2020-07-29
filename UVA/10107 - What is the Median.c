/*
**BISMILLAHIR RAHMANIR RAHIM*****
***** Moksedur Rahman Sohan *****
*****  Sust -CSE - 2018/19  *****
***** MARVEL IS BEST*************
*/

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
int main()
{
    multiset <ll, greater <ll> > m;
    multiset <ll, greater <ll> >:: iterator it;
    ll a,sz,x,y,me,k=0;
    while(~scanf("%lld",&a))
    {
        m.insert(a);
        sz=m.size();
        it=m.begin();
        if(sz%2==1)
        {
            advance(it, m.size() / 2);
            me = *it;
        }
        else {
            advance(it, m.size() / 2);
             x=*it;
             it--;
             y=*it;
             me=(x+y)/2;
        }
        k++;
        cout<<me<<endl;
    }

    return 0;

}
