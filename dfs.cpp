
#include <bits/stdc++.h>

using namespace std;
void print(int **edges,int v,int start,bool* visited){
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
            print(edges,v,i,visited);
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
    bool* visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    print(edges,v,0,visited);

    return 0;
}
