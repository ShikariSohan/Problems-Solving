#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<queue>
#include <cstring>
#include <utility>
#define sz 100000
#define ll long long int
#define pb push_back
#define pf push_front
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define ses '\n'
using namespace std;
#define fuck 100010
int parent[10000];
int r[1000];
int n,m;

void make_set()
{
    for(int i=0;i<=n;++i)
    {
        parent[i]=i;
        r[i]=1;
    }

}

int find_rep(int node)
{
    if(node==parent[node]) return node;

    // return find_rep(parent[node]);

    return parent[node]=find_rep(parent[node]);
}

void union_set(int a, int b)
{
    int x=find_rep(a);
    int y=find_rep(b);

    ///if(x!=y) parent[y]=x; naive

    if(x!=y)
    {
        if(r[x]<r[y]) swap(x,y);

        parent[y]=x;

        if(r[x]==r[y]) ++r[x];
    }

}
int main()
{
    tin
    {
        cin>>n;
        make_set();
        int x,w,y;
        vector<pair<int ,pair<int,int> > >v;
        while(1)
        {
            cin>>x>>y>>w;
            if(x==0 && y==0 && w==0)
                break;
            v.pb({w,{x,y}});
        }
        sort(v.begin(),v.end());
        int l=v.size();
        int cost=0;
        for(int i=0;i<l;++i)
    {
        int x=v[i].second.first;
        int y=v[i].second.second;
        int c=v[i].first;

        if(find_rep(x)!=find_rep(y))
        {
            cost+=c;
            //ans.pb(a[i].second);
            union_set(x,y);
        }
    }tout;
    //cout<<"c ==  "<<cost<<ses;
    make_set();
    int co=0;
     for(int i=l-1;i>=0;i--)
    {
        int x=v[i].second.first;
        int y=v[i].second.second;
        int c=v[i].first;

        if(find_rep(x)!=find_rep(y))
        {
            co+=c;
            //ans.pb(a[i].second);
            union_set(x,y);
        }
    }
    //cout<<"debug  "<<cost+co<<ses;
    if((cost+co)%2==1)
        cout<<cost+co<<"/2"<<ses;
    else cout<<(cost+co)/2<<ses;
    }
}
