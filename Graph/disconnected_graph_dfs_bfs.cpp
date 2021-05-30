 
#include <bits/stdc++.h>

using namespace std;

void printbfs(int **edges,int v,int start,bool* visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int currentVertex=q.front();
        q.pop();
        cout<<currentVertex<<endl;
        for(int i=0;i<v;i++){
            if(i==currentVertex){
                continue;
            }
            if(edges[currentVertex][i]==true && !visited[i]){
               
                    q.push(i);
                    visited[i]=true;
                
                
            }
            
        }
        
        // cout<<start<<endl;
    }
    delete [] visited;
}

void printdfs(int **edges,int v,int start,bool* visited){
    visited[start]=true;
    cout<<start<<endl;
    for(int i=0;i<v;i++){
        if(i==start){
            continue;
        }
        if(edges[start][i]==1){
            if(visited[i]){
                continue;
            }
            printdfs(edges,v,i,visited);
        }
        
        
    }
    
}
void BFS(int ** edges,int v){

     bool* visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            printbfs(edges,v,i,visited);
        }
    }
    

}
void DFS(int **edges , int v){
    bool * visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            printdfs(edges,v,0,visited);
        }
    }
}

int main()
{
    
    int v,e;
    cin>>v>>e;
    int **edges=new int*[v];
    for(int i=0;i<v;i++){
        edges[i]=new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
   //Print BFS
    BFS(edges,v);

    //DFS
    DFS(edges,v);

    return 0;
}
