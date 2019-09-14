#include<iostream>
using namespace std;
struct rectangle//structure definitoin so diffrent data- type 2 variables.
{
	int length;
	float breadth;
	
};
int main(){
	struct rectangle r={20,3.02};
	r.length=100;//length redeclareed or changed
	cout<<"area of reactangle is "<<r.length*r.breadth<<"\n";


}