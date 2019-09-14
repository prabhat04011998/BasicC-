#include<iostream>
using namespace std;
int fact(int n){
if(n==0 || n==1){
return 1;
}
return n*fact(n-1);
}

int ITR(int n){
int s=1;
for(int i=1;i<=n;i++){
cout<<i<<endl;
s=s*i;
}
return s;}

int main(){
int n =4;
cout<<ITR(n);
return 0;
}
