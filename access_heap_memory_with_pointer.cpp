#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *p;
	p=new int[5];//like malloc of c ,memory allocated in heap (int *)malloc(5*sizeof(int));
	cout<<"value of p is :"<<p<<"\nDerefrenced Value :"<<*p;
}