//const and refrence variable to be initialized on the same line in which they declared.

//member initialization list is user for dynamic values of refrence and const variables.
#include<iostream>
using namespace std;

class m_a
{
private:
   int regVar;
   const int constVar;
 public:
   m_a(int a,int b) :regVar(a),constVar(b){
   };
   void print(){
     cout<<"regular variable is "<<regVar<<"const variable is "<<constVar<<endl;

   };

};
int main(){
  m_a m(2,4);
  m.print();

}
