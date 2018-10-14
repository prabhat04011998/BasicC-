#include<iostream>
using namespace std;
void passbyvalue(int x){
  x=99;
}
void passbyrefrence(int *x){
  *x=99;
}
int main(){
  int preety=20;
  int mad=24;
  passbyvalue(preety);
  passbyrefrence(&mad);

  cout<<"now the value of preety is "<<preety<<endl;
  cout<<"now the value of mad is "<<mad<<endl;



}
