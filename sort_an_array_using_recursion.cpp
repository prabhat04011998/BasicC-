#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &vec,int a){
    if(vec.size()==0 || vec[vec.size()-1]<a){
        vec.push_back(a);
        return;
    }
    int last=vec[vec.size()-1];
    vec.pop_back();
    insert(vec,a);
    vec.push_back(last);
}
void sorting(vector<int> &vec){
    if(vec.size()==0){
        return ;
    }
    int a=vec[vec.size()-1];
    vec.pop_back();
    sorting(vec);
    insert(vec,a);
}
int main(){
    int n;cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;cin>>a;vec.push_back(a);
        
    }
    sorting(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
