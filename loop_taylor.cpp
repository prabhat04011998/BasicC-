#include<iostream>
using namespace std;

double e(float x,float n){

if(n==1){
return 1;
}
return (1+(x/n))*e(x,n-1);


}
int main(){
cout<<e(1,10);
}
