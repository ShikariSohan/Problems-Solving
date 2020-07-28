    #include<stdio.h>
    int main()
    {
        int n,i,x,y,z,a,b,c,k,j;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
        if(x>y && x>z) { a=x;if(y>z){b=y;c=z;}else{b=z;c=y;} }
        else if (y>x && y>z) { a=y;if(x>z){b=x;c=z;}else{b=z;c=x;} }
        else if (z>x && z>y) { a=z;if(x>y){b=x;c=y;}else{b=y;c=x;} }
        k=(b*b)+(c*c);
        j=a*a;
        if(k==j)
            printf("Case %d: yes\n",i);
            else
            printf("Case %d: no\n",i);
        }
        return 0;
    }
