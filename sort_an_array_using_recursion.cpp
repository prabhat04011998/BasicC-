#include<bits/stdc++.h>
using namespace std;
void inplace(int arr[],int n){
    if(n==0){
        return ;
    }
    if(arr[n-1]>arr[n]){
        swap(arr[n-1],arr[n]);
        inplace(arr,n-1);
    }
    return ;
    
}
void Psort(int arr[],int n){
    if(n<0){
        return ;
    }
    Psort(arr,n-1);
    // for(int i=n;i>=0;i--){
    //     if(arr[i-1]>arr[i]){
    //         swap(arr[i-1],arr[i]);
    //     }
    // }
    inplace(arr,n);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Psort(arr,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
