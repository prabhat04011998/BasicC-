#include<iostream>
using namespace std;
struct rectangle {
	int length;
	int breadth;
};
int main(){
	struct rectangle r={10,20};
	struct rectangle *p=&r;
	r.length=20;
	cout<<"normal acccessing "<<r.length;
	cout<<"\n pointer acccessing "<<(*p).length<<"\n or"<<p->length;

}