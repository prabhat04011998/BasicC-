// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	int ans=0;
    //Function to find if the given edge is a bridge in graph.
    void dfs(int src,int parent,int timer,vector<bool> &visited,vector<int> &low,vector<int> &tin,vector<int> adj[],int c,int d){
        visited[src]=true;
        low[src]=tin[src]=timer++;
        for(auto it:adj[src]){
            if(it==parent){
                continue;
            }
            
            if(visited[it]==0){
                dfs(it,src,timer,visited,low,tin,adj,c,d);
                low[src]=min(low[it],low[src]);
                if(low[it]>tin[src] && ((it==c && src==d) || (it==d && src==c))){
                    ans=1;
                }
            }else{
                low[src]=min(low[src],tin[it]);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<bool> visited(V,false);
        vector<int> low(V,0);
        vector<int> tin(V,0);
        int timer=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,-1,timer,visited,low,tin,adj,c,d);
            }
        }
        return ans;
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
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
