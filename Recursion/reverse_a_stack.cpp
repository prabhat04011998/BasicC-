#include<bits/stdc++.h>
using namespace std;
void second(stack<int> &s,int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    second(s,temp);
    s.push(val);
    
}
void revers(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    revers(s);
    second(s,temp);
}
int main(){
    stack<int> s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        s.push(a);
    }
    revers(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
