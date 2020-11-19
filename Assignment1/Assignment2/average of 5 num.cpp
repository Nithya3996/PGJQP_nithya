#include <iostream>
using namespace std;
class Check_average
{
  int a,b,c,d,e,avg;
  public: void check()
  {
      cout<<"Enter the five number:"<<endl;
      cin>>a>>b>>c>>d>>e;
      avg=(a+b+c+d+e)/5;
      cout<<"The average of five number is:"<<avg<<endl;

        if(avg>10)
        cout<<"The average of five number is greater than 10"<<endl;
      else
        cout<<"The average of five number is smaller than 10"<<endl;


  }
};
int main()
{
   Check_average d1;
   d1.check();
}
