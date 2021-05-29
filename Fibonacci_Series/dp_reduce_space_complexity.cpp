/*
TIme COmplexity- 
Space Complexity- 
*/

#include <bits/stdc++.h>
using namespace std;
int fib(int* arr,int n){
    if(n==0 || n ==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        
    }
    return c;

}
int main(){
    // int n;cin>>n;
    int n=3;
    int arr[n+2]={0};
    arr[0]=0;
    arr[1]=1;
    //testing
    // for(int i=0;i<7;i++){
    //         cout<<fib(arr,i)<<" ";

    // }
    cout<<fib(arr,n);
    return 0;
}