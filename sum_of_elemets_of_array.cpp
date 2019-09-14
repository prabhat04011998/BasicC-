#include<iostream>
using namespace std;
int main()
{
  int x;
  cout<<"enter the no of elements in array"<<endl;
  cin>>x;
  int arr[x];
  int sum=0;
  for(int i=0;i<x;i++)
  {
    cout<<"enter elements"<<endl;
    cin>>arr[i];
    sum+=arr[i];

  }
  cout<<"sum is "<<sum<<endl;

}
