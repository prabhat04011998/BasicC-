/*
time complexity= Elog(E)+ E*V

*/

#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
        int source;
        int destination;
        int weight;
};
bool compare(edge e1,edge e2){
    return e1.weight<e2.weight;
}
int findparent(int *parent,int v){
    if(parent[v]==v){
        return v;
    }
    return findparent(parent,parent[v]);
}
void kruskal(edge *input,int v,int e){
    sort(input,input+e,compare);
    edge *mst=new edge[v-1];
    int *parent=new int[v];
    for(int i=0;i<v;i++){
        parent[i]=i;
    }
    int count=0;int i=0;
    while(count!=v-1){
        edge currentedge=input[i];
        
        int srcparent=findparent(parent,currentedge.source);
        int destparent=findparent(parent,currentedge.destination);
        if(srcparent!=destparent){
            
            mst[count]=currentedge;
            count++;
            parent[srcparent]=destparent;
        }
        i++;
    }
    
    for(int i=0;i<v-1;i++){
        if(mst[i].source<mst[i].destination){
            cout<<mst[i].source<<" "<<mst[i].destination<<" "<<mst[i].weight<<endl;
        }else{
            cout<<mst[i].destination<<" "<<mst[i].source<<" "<<mst[i].weight<<endl;

        }
    }

}
int main(){
    int v,e;cin>>v>>e;
    edge *input=new edge[e];
    for(int i=0;i<e;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].destination=d;
        input[i].weight=w;
    }
    kruskal(input,v,e);

    return 0;
}