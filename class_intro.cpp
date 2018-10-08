#include<iostream>
using namespace std;

class pclass{
  public:
    pclass()
    {
      cout<<"This is constructor"<<endl;
    }
    void pAdd(int x, int y)
    {
      cout<<"your output is "<<x+y;
    }

};
int main()
{
  pclass pobject;
  pobject.pAdd(2,3);
  return 0;

}
