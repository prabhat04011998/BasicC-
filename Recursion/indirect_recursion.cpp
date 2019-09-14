#include<iostream>
using namespace std;
void funb(int n);
void funa(int n){
if(n>0){
cout<<n<<endl;
funb(n-1);
}

}
void funb(int n){
if(n>0){
cout<<n<<endl;
funa(n/2);
}
}
int main(){
int n=20;
funa(n);
return 0;
}
