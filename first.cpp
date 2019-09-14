#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	int count=sizeof(a)/sizeof(a[0]);
	cout<<"size of array is "<<count<<"\n";
	for(int i=0;i<count;i++){
		cout<<a[i]<<"\n";

	}
	
	return 0;
}