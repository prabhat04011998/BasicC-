
#include <bits/stdc++.h>

using namespace std;
stack<int> s;

void pushatbottom(int a){
    if(s.size()==0){
        s.push(a);
    }else{
        int t=s.top();
        s.pop();
        pushatbottom(a);
        s.push(t);
        
    }
    
}
void reverse(){
    if(s.size()>0){
        int t=s.top();
        s.pop();
        
        reverse();
        
        pushatbottom(t);
        
    }
        
    
}

int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    reverse();
    while(!s.empty()){
        int t=s.top();
        cout<<t<<" ";
        s.pop();
    }

    return 0;
}
