#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> key(V,INT_MAX);
        vector<bool> mst(V,false);
        vector<int> parent(V,-1);
        
        key[0]=0;
        
        for(int count=0;count<V;count++){
            int mini=INT_MAX,u;
            for(int i=0;i<V;i++){
                if(mst[i]==false && key[i]<mini){
                    mini=key[i];
                    u=i;
                }
            }
            // cout<<mini<<" "<<u<<endl;
            mst[u]=true;
            for(auto it:adj[u]){
                int v=it[0];
                int weight=it[1];
                // cout<<v<<" "<<weight<<endl;
                // return 0;
                if(mst[v]==false && weight<key[v]){
                    key[v]=weight;
                    parent[v]=u;
                }
                
            }
        }
        // return 0;
        int sum=0;
        for(int i=1;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                if(adj[i][j][0]==parent[i]){
                    sum+=adj[i][j][1];
                }
                
            }
            
        }
        // cout<<sum<<endl;
        return sum;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
