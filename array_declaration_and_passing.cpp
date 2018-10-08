
#include<iostream>


using namespace std;
void display( int arr[],int j)
  {

    for(int i=0;i<j;i++)
    {
      cout<<i<<"element is "<<arr[i]<<endl;
    }
  }

int main()
 {
   int i,j;
   cout<<"enter size of array";
   cin>>j;
   int arr[j];
   for(i=0;i<j;i++)
   {
     cout<<"enter element"<<endl;
     cin>>arr[i];
   }
   display(arr,j);
 }
