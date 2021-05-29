#include<bits/stdc++.h>
using namespace std;
//index returns the index of minimu element in given range.
int index(int arr[],int start,int end){
    int min=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
   
    return min;
}
void selsort(int arr[],int start,int end){
    if(start>=end){
        return;
    }else{
        int min_index,tmp;
        min_index=index(arr,start,end);
        tmp=arr[start];
        arr[start]=arr[min_index];
        arr[min_index]=tmp;
        
        selsort(arr,start+1,end);
        
    }
}
int main(){
    int arr[]={2,5,33,23};
    selsort(arr,0,3);
    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
