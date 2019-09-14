#include<iostream>
using namespace std;
int prabhat=33;
int main()
{
  int prabhat=23;
  cout<<"this is local "<<prabhat<<endl;  //this will print local value of prabhat that is 23;
  cout<<"this is global "<<::prabhat<<endl; //:: is known as uranry_scope_resolution operator so this will print 33 means global value of variable.

};
