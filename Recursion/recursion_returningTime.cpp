#include<iostream>
//static and global both variable will have the single copy so the result of the program will be same.
using namespace std;
int x=0;//global variable
int fun(int n){
//static int x=0;//static
if(n>0){
x++;
return fun(n-1)+x;
}
return 0;
}
int main(){
int n=5;
cout<<fun(n);
return 0;
}
