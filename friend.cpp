//ek function agar class ka friend hai to hum class ke variables and functions ko class ke bahar se bhi access kr skte h bas apne ko function ka prototype dena pdega class ke andar.
#include<iostream>
using namespace std;
class prabhat{
public:
  prabhat(){
    pvar=0;
  }
private:
  int pvar;
friend void friendPrabhat(prabhat &p);
};
void friendPrabhat(prabhat &p){
  p.pvar=900;
  cout<<p.pvar;

};
int main(){
  prabhat pika;
  friendPrabhat(pika);
}
