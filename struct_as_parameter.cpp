#include<iostream>
using namespace std;
struct rectangle{
	int length;
	int breadth;
};
void initialize(struct rectangle *r,int l,int b){
	r->length=l;
	r->breadth=b;

}
int area(struct rectangle r1){//if i use struct rectangle &r1 then it'll be call by refrence;
	return r1.length*r1.breadth;
}
void changeLength(struct rectangle *p,int l){
	p->length=l;
	cout<<"\nNew length is :"<<p->length;
}
int main(){
	struct rectangle r={10,20};
	initialize(&r,3,5);
	cout<<"area of rectangle is :"<<area(r);
	changeLength(&r,22);
}