#include<iostream>
using namespace std;
int main(){
  int a;
  cout<< "integer takes "<<sizeof(a)<<" Bytes of memeory"<<endl;
  char b;
  cout<< "character takes "<<sizeof(b)<<" Bytes of memeory"<<endl;
  double c;
  cout<< "Double takes "<<sizeof(c)<<" Bytes of memeory"<<endl;
  float d;
  cout<< "float takes "<<sizeof(d)<<" Bytes of memeory"<<endl;
  long e;
  cout<< "long takes "<<sizeof(e)<<" Bytes of memeory"<<endl;
  float prabhat[2];
  cout<<"size of this array is "<<sizeof(prabhat)<<" bytes"<<endl;//because evert float have 4 bytes so 4*2=8

  //want to know no of elements in array so here is a trick
  cout<<sizeof(prabhat)/sizeof(prabhat[0])<<" elements is this array"<<endl;

}
