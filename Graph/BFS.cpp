
#include <bits/stdc++.h>

using namespace std;
queue<int> q;

void print(int **edges,int v,bool* visited){
    while(!q.empty()){
        int start=q.front();
        q.pop();
        cout<<start<<endl;
        for(int i=0;i<v;i++){
            if(i==start){
                continue;
            }
            if(edges[start][i]==true && !visited[i]){
               
                    q.push(i);
                    visited[i]=true;
                
                
            }
            
        }
        
        // cout<<start<<endl;
    }
    delete [] visited;
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
    q.push(0);
    visited[0]=true;
    print(edges,v,visited);

    return 0;
}
