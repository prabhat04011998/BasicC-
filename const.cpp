#include<iostream>
using namespace std;
class prabhat{
public:
  void prnt(){
    cout<<"i am regular function"<<endl;
  }
  void prnti() const{
    cout<<"i am constant function"<<endl;//make this const functin due to const object below
  }
};
int main(){
  prabhat p;
  p.prnt();
  //for constant object we need constant function
  const prabhat p2;
  p2.prnti();
}
