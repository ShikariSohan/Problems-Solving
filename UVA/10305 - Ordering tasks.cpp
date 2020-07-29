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
#define tcase ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define ses '\n'
using namespace std;
#define fuck 100010
vector<ll>v[fuck];
stack<ll>st;
ll vis[fuck];
void init()
{
    for(int i=0;i<fuck;i++)
    {
        v[i].clear();
        vis[i]=0;
    }
}
void dfs(ll x)
{
   if(vis[x]==1)
    return;
   vis[x]=1;
   if(!v[x].empty())
    for(ll i=0;i<v[x].size();i++)
    {
       if(vis[v[x][i]]==0)
        dfs(v[x][i]);
    }
   st.push(x);
}
int main()
{
    ll x,y,m,n;
    while(1)
    {
       init();
        cin>>x>>y;
        if(x==0 && y==0)
            break;
        for(int i=0;i<y;i++)
        {
            cin>>m>>n;
            v[m].pb(n);
        }
         for(int i=1;i<=x;i++)
            dfs(i);

           while(!st.empty())
           {
               cout<<st.top()<<" ";
               st.pop();
           }
          puts("");
    }
}
