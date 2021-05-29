/*



*//*
TIme COmplexity- 
Space Complexity- 
*/

#include <bits/stdc++.h>
using namespace std;

void multiply(int f[2][2],int m[2][2]){
    int a=f[0][0]*m[0][0]+f[0][1]*m[1][0];
    int b=f[0][0]*m[0][1]+f[0][1]*m[1][1];
    int c=f[1][0]*m[0][0]+f[1][1]*m[1][0];
    int d=f[1][0]*m[0][1]+f[1][1]*m[1][1];
    
    f[0][0]=a;
    f[0][1]=b;
    f[1][0]=c;
    f[1][1]=d;
    
}
void power(int f[2][2],int n){
    int m[2][2]={{1,1},{1,0}};
    for(int i=2;i<=n;i++){
        multiply(f,m);
    }
    
}



int fib(int n){
    if(n==0 || n ==1){
        return n;
    }
    int f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0];

}
int main(){
    // int n;cin>>n;
    int n=3;

    //testing
    for(int i=0;i<7;i++){
            cout<<fib(i)<<" ";

    }
    // cout<<fib(n);
    return 0;
}