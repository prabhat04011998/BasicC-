#include<iostream>
using namespace std;
//n ki power m (n^m)

int pow(int n,int m){
if(m==0){
return 1;
}
else if(n==0){
return 0;}
else{
return n*pow(n,m-1);
}}

int power(int n,int m){
if(m==0){
    return 1;
}
else if(m%2==0){
    return power(n*n,m/2);
}else{
    return n*power(n*n,(m-1)/2);
}
}

int main(){
int n=2,m=4;
cout<<power(n,m);
return 0;
}
