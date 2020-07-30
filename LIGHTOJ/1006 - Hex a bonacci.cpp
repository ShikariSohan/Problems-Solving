#include<bits/stdc++.h>
using namespace std;
 long long int fn[10000];
int main() {
     long long int n, caseno = 0, cases,i;
   // for(i=0;i<10000;i++) x[i]=-1;
    scanf("%lld", &cases);
    while( cases-- ) {
            for(i=0;i<6;i++)
            cin>>fn[i];
            cin>>n;
            for(i=6; i<=n; i++)
            fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
        printf("Case %lld: %lld\n", ++caseno, fn[n] % 10000007  );
    }
    return 0;
}
