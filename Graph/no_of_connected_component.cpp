/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void dfs(int src,vector<bool> &visited,vector<int> graph[]){
    visited[src]=1;
    for(auto it:graph[src]){
        if(!visited[it]){
            dfs(it,visited,graph);
        }
    }
    
}

int main()
{
    int n;
    int e;
    cin>>n;
    cin>>e;
    
    vector<int> graph[n];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int count=0;
    vector<bool> visited(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            dfs(i,visited,graph);
        }
    }
    cout<<count<<endl;
    return 0;
}
