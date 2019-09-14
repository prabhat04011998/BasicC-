#include<iostream>
using namespace std;
int [] fun(int n){
	int *p;
	p=new int[n*sizeof(int)];
	return (p);
}
int main(){
	int *A;
	A=fun(5);
	cout<<A;
}