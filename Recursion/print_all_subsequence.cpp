/*
https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=6
*/


#include <bits/stdc++.h>

using namespace std;
void print(vector<int> vec){
    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
void printallsubsequence(vector<int> &temp,vector<int> &vec,int n,int i){
    if(i>=n){
        print(temp);
        return ;
    }
    temp.push_back(vec[i]);
    printallsubsequence(temp,vec,n,i+1);
    temp.pop_back();
    printallsubsequence(temp,vec,n,i+1);
    

}

int main()
{
    // string str="abcdcba";
    vector<int> vec={1,2,3};
    int n=vec.size();
    vector<int> temp;
    printallsubsequence(temp,vec,n,0);
    
    

    return 0;
}
