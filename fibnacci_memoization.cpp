
#include <iostream>
using namespace std;
int m[10];
int mfib(int n){
    if(n<=1){
        m[n]=n;
        return n;
    }
    if(m[n-2]==-1){
        m[n-2]=mfib(n-2);
        
    }
    if(m[n-1]==-1){
        m[n-1]=mfib(n-1);
        
    }
    return m[n-2]+m[n-1];
}
int main(void){
    // Your code here!
    for(int i=0;i<10;i++){
        m[i]=-1;
    }
    int n=7;
    cout<<mfib(n);
    
}







