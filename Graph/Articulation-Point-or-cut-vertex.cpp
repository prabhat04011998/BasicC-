        if(parent==-1 && child>1 &&  find(result.begin(),result.end(),src)==result.end() ){
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int src,int parent,vector<bool> &visited,vector<int> &low,vector<int> &discovertime,vector<int> adj[],int timer,vector<int> &result){
        visited[src]=true;
        low[src]=discovertime[src]=timer++;
        int child=0;
        for(auto it:adj[src]){
            if(it==parent){
                continue;
            }
            if(visited[it]==0){
                dfs(it,src,visited,low,discovertime,adj,timer,result);
                low[src]=min(low[it],low[src]);
                if(low[it]>=discovertime[src] && parent!=-1 && find(result.begin(),result.end(),src)==result.end() ){
                    result.push_back(src);
                }
                child++;
            }else{
                low[src]=min(low[src],discovertime[it]);
            }
            
            
        }
        if(parent==-1 && child>1 &&  find(result.begin(),result.end(),src)==result.end() ){
            result.push_back(src);
        }
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> result;
        
        vector<bool> visited(V,false);
        vector<int> low(V,0);
        vector<int> discovertime(V,0);
        
        int timer=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,-1,visited,low,discovertime,adj,timer,result);
            }
        }
        sort(result.begin(),result.end());
        // result.erase(result.begin());
        if(result.size()==0){
            result.push_back(-1);
        }
        return result;
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
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
