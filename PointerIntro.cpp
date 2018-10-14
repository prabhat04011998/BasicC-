#include<iostream>
using namespace std;
int main(){
  int f=3;
  cout<< (&f)<<endl;
  int *fpointer;
  fpointer=&f;
  cout<<fpointer<<endl;
};
