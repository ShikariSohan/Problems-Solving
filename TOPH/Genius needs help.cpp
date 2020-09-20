#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
vector<ll>v;
void jog_kori(string a, string b)
{
    if(!v.empty())
        v.clear();
    ll temp=0,l,l1,i,x,y;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    l=a.size();
    l1=b.size();
    for(i=0; i<l1; i++)
    {
        x=a[i]-'0';
        y=b[i]-'0';
        x=x+y+temp;
        y=x%10;
        temp=x/10;
        v.pb(y);
    }
    for(i=l1; i<l; i++)
    {
        x=a[i]-'0';
        x=x+temp;
        y=x%10;
        temp=x/10;
        v.pb(y);
    }
    if(temp)
        v.pb(temp);
    reverse(v.begin(),v.end());
    l1=v.size();
    for(i=0; i<l1; i++)
        cout<<v[i];

}
int main()
{
    ll x,t,i,j,l,l1;

    cin>>t;
    string a,b;
    for(j=1; j<=t; j++)
    {



        cin>>a>>b;
        cout<<"Case #"<<j<<": ";
        l=a.size();
        l1=b.size();
        if(l>l1)
            jog_kori(a,b);
        else
            jog_kori(b,a);
       cout<<endl;;
    }
}
