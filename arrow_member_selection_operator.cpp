#include<iostream>
using namespace std;
class prabhat
{
public:
  prabhat(){

  }
  void printcrap(){
    cout<<"hello prabhat ! what can i do for you?"<<endl;
  }
};

int main(){
  prabhat prabhatobject;
  prabhat *prabhatpointer=&prabhatobject;


  prabhatobject.printcrap();
  prabhatpointer->printcrap();//with pointer object we use arrow member selection operator instead of dot.



}
