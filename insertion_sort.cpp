#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
    }
    
    
}
int main(){
    int arr[]={2,4,24,53,22,553,224};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
