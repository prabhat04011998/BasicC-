//in function overloading we have 2 or more function with the same name but their parameters have different data types
#include<iostream>
using namespace std;
void printx(int x)
{
  cout<<"this function is call when integer argument is passed"<<endl;

}
void printx(float x)
{
  cout<<"this function is called when float agrument is passed during call";
}
int main()
{
  int a=44;
  float b=4.3;
  printx(a);
  printx(b);

}
