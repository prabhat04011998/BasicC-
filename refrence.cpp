//refrence is a concept of c++
//refrence is nothing but another name of variable.
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int &r=a;
	cout<<"a is"<<a<<"\n";
	r++;
	cout<<r<<"\n";
	cout<<a<<"\n";
	a++;
	cout<<"a :"<<a<<" r : "<<r;

}