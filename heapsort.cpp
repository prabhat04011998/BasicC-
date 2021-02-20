#include<bits/stdc++.h>
using namespace std;
void printheap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void heapify(int a[],int n,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n && a[largest]<a[left]){
        largest=left;
        
    }
    if(right<n && a[largest]<a[right]){
        largest=right;
    }
    if(largest!=index){
        swap(a[index],a[largest]);
    heapify(a,n,largest);
        
    }
    
}

void heapsort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        swap(a[i],a[0]);
        heapify(a,i,0);
    }
}
void buildheap(int a[],int n){
    int startindex=(n/2)-1;
    for(int i=startindex;i>=0;i--){
        heapify(a,n,i);
    }
    
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    buildheap(a,n);
    heapsort(a,n);
    printheap(a,n);
    return 0;
}
