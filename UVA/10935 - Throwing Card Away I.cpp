#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
int main()
{


     while(1)
     {
         int i,n,t;
         cin>>n;

         if(n==0)
            break;
         else if (n==1)
         {
              cout<<"Discarded cards:"<<endl;
              cout<<"Remaining card: 1"<<endl;
         }

            else
           {
                int ar[n-1];
         queue<int>a;
         for( i=1;i<=n;i++)
            a.push(i);
         for( i=0;i<n-1;i++)
         {
             ar[i]=a.front();
             a.pop();
             t=a.front();
             a.push(t);
             a.pop();
         }
        cout<<"Discarded cards: ";
         for( i=0;i<n-2;i++)
            cout<<ar[i]<<", ";
         cout<<ar[i]<<endl;
         cout<<"Remaining card: "<<a.front()<<endl;
           }
     }


    return 0;

}
