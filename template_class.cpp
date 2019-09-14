#include<iostream>
using namespace std;
template<class t>
class arithametic{
private:
	t a;
	t b;
public:
	arithametic(t a,t b);
	t add();
	t sub();
};

template<class t>
arithametic<t>::arithametic(t a,t b){
	this->a=a;
	this->b=b;
}
template<class t>
t arithametic<t>::add(){
	return a+b;
}
template<class t>
t arithametic<t>::sub(){
	return a-b;
}
int main(){
	arithametic<int> ar(30,3);
	cout<<ar.add();
	arithametic<float> ar1(1.5,1.2);
	cout<<"\n"<<ar1.add();
	cout<<"\n"<<ar1.sub();
}