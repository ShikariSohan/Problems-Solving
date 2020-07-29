/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
bool mircar(char x,char y)
{
    if(x=='A' && y=='A')
        return true;
    if((x=='E' && y=='3')||(x=='3' && y=='E'))
        return true;
    if(x=='H' && y=='H')
        return true;
    if(x=='I' && y=='I')
        return true;
    if((x=='J' && y=='L')||(x=='L' && y=='J'))
        return true;
    if((x=='M' && y=='M'))
        return true;
    if(x=='O' && y=='O')
        return true;
    if((x=='S' && y=='2')||(x=='2' && y=='S'))
        return true;
    if(x=='T' && y=='T')
        return true;
    if((x=='Z' && y=='5')||(x=='5' && y=='Z'))
        return true;
    if(x=='U' && y=='U')
        return true;
    if(x=='V' && y=='V')
        return true;
    if(x=='W' && y=='W')
        return true;
    if(x=='X' && y=='X')
        return true;
    if(x=='Y' && y=='Y')
        return true;
    if(x=='1' && y=='1')
        return true;
    if(x=='8' && y=='8')
        return true;
    return false;
}
bool palindrome(string s)
{
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p)
        return true;
    else return false;
}
bool mirpal(string s)
{
    ll x=s.size();
    ll j=x-1;
    x=x/2;
    for(ll i=0;i<x+1;i++)
    {
        if(!mircar(s[i],s[j]))
        return false;
        j--;
    }
    return true;
}
int main()
{
       //freopen ("input.txt","r",stdin);
       //freopen ("output.txt","w",stdout);
    string s;
    bool mir,pal;
    while(cin>>s)
    {
        pal=palindrome(s);
        mir=mirpal(s);
        if(pal && mir)
            cout<<s<<" -- is a mirrored palindrome."<<ses;
        else if(pal)
            cout<<s<<" -- is a regular palindrome."<<ses;
        else if(mir)
            cout<<s<<" -- is a mirrored string."<<ses;
        else  cout<<s<<" -- is not a palindrome."<<ses;
        cout<<ses;
    }



    return 0;
}
/*   --------------------
    |      ~SOHAN~       |
    |   ~Chandler68~     |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga

*/

