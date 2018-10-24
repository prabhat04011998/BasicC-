//deconstructor is code that run automically upon destruction of your object.

//destructior free that memory
#include<iostream>
using namespace std;
class prabhat{
public:
  prabhat(){
    cout<<"hello m deconstructor"<<endl;
  }
  ~prabhat(){
    cout<<"hello m destructior"<<endl;
  }
protected:
private:
};

int main(){
  prabhat p;
  cout<<"helllo prabhat check the diffrence"<<endl;

}
