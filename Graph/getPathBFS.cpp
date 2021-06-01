
#include <bits/stdc++.h>

using namespace std;
queue<int> q;
map<int,int> m;
void print(int **edges,int v,bool* visited){
    while(!q.empty()){
        int start=q.front();
        q.pop();
        // cout<<start<<endl;
        for(int i=0;i<v;i++){
            if(i==start){
                continue;
            }
            if(edges[start][i]==true && !visited[i]){
               
                    q.push(i);
                    m.insert({i,start});
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
    int sv,tofind;cin>>sv>>tofind;
    q.push(sv);
    visited[sv]=true;
    print(edges,v,visited);
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<< " "<<i->second<<endl;
    }
    while(tofind!=sv){
        cout<<tofind<<endl;
        if(m.find(tofind)!=m.end()){
            tofind=m[tofind];
        }else{
            cout<<"NO PATH AVALIABLE "<<endl;
            break;
        }
        
    }


    return 0;
}
