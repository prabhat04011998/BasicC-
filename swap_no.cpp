#include<iostream>
using namespace std;
//so it's pass by value so the actual parameters would'nt change in this case.
// void swap(int x, int y){
// 	int temp;
// 	temp=x;
// 	x=y;
// 	y=temp;


// }
// int main(){
// 	int a,b;
// 	a=10;
// 	b=20;
// 	cout<<"first is : "<<a<<" Second is: "<<b;
// 	swap(a,b);

// 	cout<<"\nfirst is : "<<a<<" Second is: "<<b;
// }


//call by refrence
void swap(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;


}
int main(){
	int a,b;
	a=10;
	b=20;
	cout<<"first is : "<<a<<" Second is: "<<b;
	swap(a,b);

	cout<<"\nfirst is : "<<a<<" Second is: "<<b;
}

//call by adress
// void swap(int *x, int *y){
// 	int temp;
// 	temp=*x;
// 	*x=*y;
// 	*y=temp;


// }
// int main(){
// 	int a,b;
// 	a=10;
// 	b=20;
// 	cout<<"first is : "<<a<<" Second is: "<<b;
// 	swap(&a,&b);

// 	cout<<"\nfirst is : "<<a<<" Second is: "<<b;
// }

