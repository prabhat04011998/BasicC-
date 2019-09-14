#include<iostream>
using namespace std;
// class rectangle{
// private:
// 	int length;
// 	int breadth;
// public:
// 	rectangle(int l,int b){
// 		length=l;
// 		breadth=b;

// 	}
// 	int area(){
// 		return length*breadth;

// 	}
// 	void changeLength(int l){
// 		length=l;
// 		cout<<"\nchanged length is: "<<length;
// 	}
// };
// int main(){
// 	rectangle r(10,20);
// 	cout<<r.area();
// 	r.changeLength(44);
// }


class rectangle{
private:
	int length;
	int breadth;
public:
	rectangle(){length=breadth=1;};
	rectangle(int l,int b);
	int area();
	int perimeter();
	int getLength(){return length;};
	void changeLength(int l){length=l;};
	~rectangle();
};
rectangle::rectangle(int l,int b){
	length=l;
	breadth=b;
}
int rectangle::area(){
	return length*breadth;
}
int rectangle::perimeter(){
	return (2*(length+breadth));
}
rectangle::~rectangle(){};

int main(){
	rectangle r(10,20);
	cout<<r.area();
	cout<<"\n"<<r.perimeter();
	r.changeLength(44);
	cout<<r.getLength();
}