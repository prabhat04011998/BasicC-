/*
TIme COmplexity- 
Space Complexity- 
*/

#include <bits/stdc++.h>
using namespace std;
int fib(int* arr,int n){
    if(n==0 || n==1){
        return arr[n];
    }
    return arr[n]=arr[n-1]+arr[n-2];

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