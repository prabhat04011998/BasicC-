// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int v,int src,vector<bool> &visited,vector<int> adj[],stack<int> &s){
	    visited[src]=1;
	    
	    for(auto it:adj[src]){
	        if(!visited[it]){
	            dfs(v,it,visited,adj,s);
    	       // visited[it]=1;
    	       // s.push(it);
	        }
	    }
	    s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> vec;
	    stack<int> s;
	    vector<bool> visited(V,0);
	    for(int i=0;i<V;i++){
	        if(!visited[i]){
	            dfs(V,i,visited,adj,s);
	        }
	    }
	    while(!s.empty()){
	        vec.push_back(s.top());
	       // cout<<s.top()<<" ";
	        s.pop();
	    }
	    return vec;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends
