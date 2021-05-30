/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int answer=0;
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
