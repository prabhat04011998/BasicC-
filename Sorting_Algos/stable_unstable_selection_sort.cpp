#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int size){
    int min_idx;
    for(int i=0;i<size;i++){
        min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
}

void stable_selection_sort(int arr[],int size){
    int min_idx;
    for(int i=0;i<size;i++){
        min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        
        int key=arr[min_idx];
        while(min_idx>i){
            arr[min_idx]=arr[min_idx-1];
            min_idx--;
        }
        arr[i]=key;
        swap(arr[min_idx],arr[i]);
    }
    
}
int main(){
    int arr[]={2,8,3,3,38,30,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    stable_selection_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
