#include<iostream>
using namespace std;
class prabhat{
public:
  prabhat(int h):pikachu(h){

  }
  void printa(){
    cout<<"value of pikachu ="<<pikachu<<endl;
    cout<<"this->pikachu="<<this->pikachu<<endl;
    cout<<"(*this).pikachu= "<<(*this).pikachu<<endl;

  }
private:
  int pikachu;
};
int main(){
  prabhat p(10);
  p.printa();
}
