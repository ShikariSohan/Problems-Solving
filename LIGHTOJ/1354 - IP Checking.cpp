    #include<bits/stdc++.h>
    using namespace std;
    int btod(int n)
    {
        int num = n;
        int dec_value =0;
        int base = 1;
        int temp = num;
        while (temp) {
            int last_digit = temp % 10;
            temp = temp / 10;

            dec_value += last_digit * base;

            base = base * 2;
        }

        return dec_value;
    }

    int main()
    {
        int i,j,t;
        int a,b,c,d,a1,b1,c1,d1;
        cin>>t;
        for(i=1;i<=t;i++)
        {
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            scanf("%d.%d.%d.%d",&a1,&b1,&c1,&d1);
           a1=btod(a1);
           b1=btod(b1);
           c1=btod(c1);
           d1=btod(d1);
    //       cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
    //       cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" "<<endl;
           if(a==a1 && b==b1 && c==c1 && d==d1)
            printf("Case %d: Yes\n",i);
            else printf("Case %d: No\n",i);

        }
    }


