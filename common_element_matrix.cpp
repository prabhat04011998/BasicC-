#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
};

void common(vector<vector<int>> &matrix,int n,int m){
    cout<<"functon working"<<endl;
    //row wise sorting O(nmlogm)
    for(int i=0;i<n;i++){
        sort(matrix[i].begin(),matrix[i].end());
    }
    cout<<"function sorted"<<endl;
    for(int i=0;i<m;i++){
        int target=matrix[0][i];
        int count=1;
        // cout<<"first loop encountered"<<endl;
        for(int j=1;j<n;j++){
            // cout<<"second loop encountered "<<endl;
            for(int k=0;k<m;k++){
                // cout<<"third loop encountered"<<endl;
                if(matrix[j][k]==target){
                    // cout<<"count = "<<count<<"target= "<<target<<"and i, k= "<<j<<" "<<k<<endl;
                    count++;
                    break;
                }
            }
            
        }
        if(count>3){
            cout<<target<<" ";
        }
    }
}

int main() {
    int n,m;
    cout<<"enter the no of rows ";
    cin>>n;
    cout<<"enter the no of columns ";
    cin>>m;
    cout<<endl;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<m;j++){
            int n;cin>>n;
            v1.push_back(n);
        }
        vec.push_back(v1);
    }
    common(vec,n,m);
    // print(vec,n,m);

	return 0;
}
