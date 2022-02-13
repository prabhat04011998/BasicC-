/******************************************************************************


*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int minvertex(int *weight,bool *visited,int v){
    int minvertex=-1;
    for(int i=0;i<v;i++){
        if(!visited[i] && (minvertex== -1 || weight[i]<weight[minvertex]) ){
            minvertex =i;
        }
    }
    return minvertex;
}
void dijkstra(int **edges,int v){
    // cout<<"hello"<<endl;
    int * weight=new int[v];
    bool *visited=new bool[v];
    
    for(int i=0;i<v;i++){
        weight[i]=INT_MAX;
        visited[i]=false;
    }
    weight[0]=0;
    for(int i=0;i<v;i++){
        int mv=minvertex(weight,visited,v);
        // cout<<"minv is "<<mv<<" ";
        visited[mv]=true;
        for(int j=0;j<v;j++){// we can run this loop upto v-1 also because for last verted all the vertex visited ho chuke honge to neeche wala chlega hi nhi kuch bhi
            if(edges[mv][j]!=0 && !visited[j]){
                if(edges[mv][j]+weight[mv]<weight[j]){
                    weight[j]=edges[mv][j]+weight[mv];
                }
            }
        }
    }
    
    for(int i=0;i<v;i++){
        cout<<i<<" - "<<weight[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    // cout<<"working"<<endl;
    int v,e;
    cin>>v>>e;
    int **edges=new int*[v];
    for(int i=0;i<v;i++){
        edges[i]=new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }
    // cout<<"check 2"<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            int a,b,c;
            cin>>a>>b>>c;
            edges[a][b]=c;
            edges[b][a]=c;
        }
    }
    // cout<<"here it is"<<endl;
    dijkstra(edges,v);
    // cout<<"Check 3"<<endl;
    for(int i=0;i<v;i++){
        delete [] edges[i];
    }
    delete [] edges;
    return 0;
}
