#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  srand(time(0));// time(0) calculates million seconds and that's why on each time diff random generated
  for(int i=0;i<20;i++)
  {
    cout<<rand()%5<<endl;//remainder is always lower than the  divisor
    //cout<<rand()<<endl //print rnadonm no's only
  }
}
