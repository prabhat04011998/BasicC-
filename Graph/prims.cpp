/*
There is some problme for last vertex it's not running, else everythin is fine"

*/

#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
        int source;
        int destination;
        int weight;
};


class table{
    public:
    int vertex;
    int parent;
    int weight;
};
int minvertax(table *tb,bool *visited,int v){
    int minvertex=-1;
    for(int i=0;i<v;i++){
        if(!visited[i] &&(minvertex == -1 || tb[i].weight<tb[minvertex].weight)){
            minvertex=i;
        }
        
    }
    // cout<<"ming vertex is "<<minvertex<<endl;
    return minvertex;
}
void prims(int **edges,int v,int e){
    table *tb=new table[v];
    bool *visited=new bool[v];
    tb[0].vertex=0;
    tb[0].parent=-1;
    tb[0].weight=0;
    for(int i=1;i<v;i++){
        tb[i].vertex=i;
        tb[i].parent=-1;
        tb[i].weight=INT_MAX;
    }
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        int minvertex=minvertax(tb,visited,v);
        // cout<<"minvertex"<<minvertex<<"visite of minvertex "<<visited[minvertex]<<endl;
        visited[minvertex]=true;
        for(int j=0;j<v;j++){
            if(edges[minvertex][j]!=0 && edges[minvertex][j]<tb[j].weight && visited[j]==false ){
                // cout<<"MINVERTI"<<minvertex<<endl;

                // cout<<j<<" - "<<tb[j].parent<< " - "<<minvertex<<endl;
                tb[j].parent=minvertex;
                // cout<<j<<" - "<<tb[j].weight<< " - "<<edges[minvertex][j]<<endl;
                tb[j].weight=edges[minvertex][j];

                
            }
        
        }
        
    }
    
    for(int i=1;i<v;i++){
        if(tb[i].vertex<tb[i].parent){
            cout<<tb[i].vertex<<" "<<tb[i].parent<<" "<<tb[i].weight<<endl;
        }else{
            cout<<tb[i].parent<<" "<<tb[i].vertex<<" "<<tb[i].weight<<endl;
        }
        

    }
    
    
}
int main(){
    int v,e;cin>>v>>e;
    int **edges=new int*[v];
    for(int i=0;i<v;i++){
        edges[i]=new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<v;i++){
        int a,b,c;cin>>a>>b>>c;
        edges[a][b]=c;
        edges[b][a]=c;
    }
    cout<<endl;
    prims(edges,v,e);
    for(int i=0;i<v;i++){
        delete [] edges[i] ;
    }
    delete [] edges;

    return 0;
}

/*

Test Input:- 

5 7
0 1 4
0 2 8
1 2 2
2 4 9
2 3 3
1 3 6
3 4 5



Expected Output:

1 0 4
2 1 2
3 2 3
4 2 9
*/