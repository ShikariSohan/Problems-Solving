    #include<stdio.h>
    int main()
    {
        int a,ax,ay,bx,by,cx,cy,dx,dy,area,i,q;
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
            dx=cx+ax-bx;
            dy=cy+ay-by;
            q=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
            if(q<0)
                q*=-1;
            area=0.5*q;
            printf("Case %d: %d %d %d\n",i+1,dx,dy,area);
        }
    }
