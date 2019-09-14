#include<iostream>
using namespace std;

int add(int x,int y)
{
  return (x+y);
}
int substract(int x,int y)
{
  return(x-y);
}
int multiply(int x,int y)
{
  return(x*y);
}
int divide(int x, int y)
{
  return(x/y);
}
int main()
{
  cout<<"enter your choice from 1 to 4"<<endl<<"1-addition"<<endl<<"2-substraction"<<endl<<"3-multiply"<<endl<<"4-divide"<<endl;
  int no,first,second;
  cin>>no;
  cout<<"enter first no on which operation to be performed"<<endl;
  cin>>first;
  cout<<"enter second no "<<endl;
  cin>>second;
  cout<<"Result is :";
  switch (no) {
    case 1:
      cout<<add(first,second);
      break;
    case 2:
      cout<<substract(first,second);
      break;
    case 3:
      cout<<multiply(first,second);
      break;
    case 4:
      cout<<divide(first,second);
      break;
    default:
      cout<<"choose wrong choice";
  }
  return 0;

}
