#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int b=1;
  cout<<a<<" "<<b;
  for(b=0;b<50)
  {
    int c;
    c=a+b;
    cout<<c;
    a=b;
    b=c;
  }
}
