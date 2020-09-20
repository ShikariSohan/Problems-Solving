#define ll long long int
class TreeAncestor {
public:
    ll sp[100050][24];
        ll lg;
    TreeAncestor(int n, vector<int>& parent) {
        
       
{
    memset(sp,-1,sizeof(sp));
    for(ll i=1;i<=n;i++)
    {
        sp[i][0]=parent[i];
    }
    for(ll k=1;(1<<k)<n;k++)
    {
        lg=k;
        for(ll i=0;i<n;i++)
        {
            if(sp[i][k-1]!=-1)
            sp[i][k]=sp[sp[i][k-1]][k-1];
        }
    }
}
    }
    
    int getKthAncestor(int n, int k) {
         for (ll i=0;i<=lg;i++) {
            if (k & (1 << i)) {
                n=sp[n][i];
                if(n==-1)
                    return -1;
            }
    }
    return n;
        
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */