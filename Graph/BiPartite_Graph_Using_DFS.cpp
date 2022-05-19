// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool dfs(vector<int> adj[], int v,
                 vector<bool>& visited, vector<int>& color)
{
 
    for (int u : adj[v]) {
 
        // if vertex u is not explored before
        if (visited[u] == false) {
 
            // mark present vertic as visited
            visited[u] = true;
 
            // mark its color opposite to its parent
            color[u] = !color[v];
 
            // if the subtree rooted at vertex v is not bipartite
            if (!dfs(adj, u, visited, color))
                return false;
        }
 
        // if two adjacent are colored with same color then
        // the graph is not bipartite
        else if (color[u] == color[v])
            return false;
    }
    return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    vector<bool> visited(V,false);
	    for(int i=0;i<V;i++){
	        if(visited[i]==false){
	            if(!dfs(adj,i,visited,color)){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
