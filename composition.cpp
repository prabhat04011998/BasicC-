//use a class inside another pclass
#include<iostream>
#include<string>
using namespace std;
class birthday{
public:
  birthday(int d,int m,int y){
    date=d;
    month=m;
    year=y;

  }
  void printdob(){
    cout<<date<<"/"<<month<<"/"<<year<<endl;
  }

private:
  int date,month,year;

};
class people{
public:
  people(string n,birthday k) : name(n),dateofbirth(k){

  };
  void printinfo(){
    cout<<name<<" was born on ";
    dateofbirth.printdob();

  }
private:
  string name;
  birthday dateofbirth;

};
int main(){
  birthday bday(4,7,1998);
  people pikachu("prabhat",bday);
  pikachu.printinfo();

}
