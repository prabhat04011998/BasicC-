#include<iostream>
using namespace std;

int fact(int x)
{
  if(x==1)
  {
    return 1;
  }
  else{
    return x*fact(x-1);
  }

}
int main()
{
  cout<<"enter the no of which you need factorial"<<endl;
  int x;
  cin>>x;
  cout<<"factorial of "<<x<<" is "<<fact(x)<<endl;
}
