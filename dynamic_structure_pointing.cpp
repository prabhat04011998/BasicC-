#include<iostream>
using namespace std;
struct  rectangle 
{
	int length;
	int breadth;
	
};
int main(){
	struct rectangle *p;
	p=new struct rectangle[sizeof(struct rectangle)];
	p->length=10;
	p->breadth=20;
	cout<<p->length<<"\n Breadth is:"<<p->breadth;
	return 0;
}