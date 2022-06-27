Algorithm:

1. Calculate the indegree of all the vertices
2. Maintain a queue and push the nodes having the indegree zero(0)
3. then apply bfs on a node with indegree zero and reduce the indegree of all the adjacent nodes by 1 
4. Repat above 2 steps till no node left



// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> result;
	    queue<int> q;
	    vector<int> indegree(V,0);
	    
	   // for(int i=0;i<V;i++){
	   //     int count=0;
	   //     for(int j=0;j<V;j++){
	   //         if(i!=j && find(adj[j].begin(),adj[j].end(),i)!=adj[j].end()){
	   //             count++;
	   //         }
	   //     }
	        
	   //     indegree[i]=count;
	   // }
	    
	    for(int i=0;i<V;i++){
	        for(auto x : adj[i])
	            indegree[x]++;
	    }
	    
	    
	    for(int i=0;i<indegree.size();i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int curr=q.front();
	        result.push_back(curr);
	        q.pop();
	        for(auto it:adj[curr]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    
	    return result;
	    
	    
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
