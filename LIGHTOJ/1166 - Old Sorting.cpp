
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

int selectionsort(int arr[], int n)
{
    int mn,k=0;
    for (int i = 0; i<n; i++)
    {
        mn = i;
        for (int j = i+1; j<n; j++)
            if(arr[j]<arr[mn]) mn = j;
         if(i!=mn) {
            swap(arr[i],arr[mn]);
            k++;
         }
    }
    return k;
}
int a[105];
int main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    //ghora;
    //precal();
    tin
    {
        ll n;
         cin>>n;
         for(ll i=0;i<n;i++)
            cin>>a[i];
         int x=selectionsort(a,n);
         tout;
         cout<<x<<ses;

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
