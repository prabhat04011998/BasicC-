#include<iostream>
using namespace std;
class prabhat
{
  public:
    void setdata(string x)
    {
      name=x;
    }
    string getdata()
    {
      return name;
    }

  private:
    string name;

};
int main()
{
  prabhat p;
  p.setdata("hello prabhat");
  cout<<p.getdata();
}
