
#include <bits/stdc++.h>
using namespace std;
int answer=0;

//to find out path we can use either bfs or dfs any , it's just if we got that vertex in bfs or dfs traversal it means there is a path available.
int DFS(int **edges,int v,int sv,bool * visited,int tofind){
   
    // cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<v;i++){
        if(sv==i){
            continue;
        }
        if(edges[sv][i]==1 && visited[i]==false){
             DFS(edges,v,i,visited,tofind);
        }
    }
}
int main()
{
    int v,e;cin>>v>>e;
    int ** edges=new int*[v];
    for(int i=0;i<v;i++){
        edges[i]=new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int a,b;cin>>a>>b;
        edges[a][b]=1;
        edges[b][a]=1;
        
    }
    bool *visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    int sv;cin>>sv;
    int tofind;cin>>tofind;
    
    DFS(edges,v,sv,visited,tofind);
    cout<<"RESULT IS  " <<visited[tofind]<<endl;
    return 0;
}
