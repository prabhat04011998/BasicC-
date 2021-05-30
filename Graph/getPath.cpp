/******************************************************************************
lot of scope of improvement , this is not 100% good code , but it's working
i don't know .
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int answer=0;
void getpath(int **edges ,int v,bool *visited,int sv,int tofind,vector<int> &vec){
    visited[sv]=true;
    if(sv==tofind){
        vec.push_back(sv);
        return ;
    }
    for(int i=0;i<v;i++){
        if(edges[sv][i]==1 && visited[i]==false){
            getpath(edges,v,visited,i,tofind,vec);
            if(find(vec.begin(),vec.end(),sv)==vec.end()){
                vec.push_back(sv);
            }

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
    vector<int> vec;
    getpath(edges,v,visited,sv,tofind,vec);
    cout<<"result is"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    // cout<<"RESULT IS  " <<visited[tofind]<<endl;
    return 0;
}
