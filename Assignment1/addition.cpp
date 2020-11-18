#include <iostream>
using namespace std;
class Addition
{
  int num1, num2;
  public: void add()
  {
      cout<<"Enter the num1:";
      cin>>num1;
      cout<<"Enter the num2:";
      cin>>num2;

      cout<<"Total num is:"<<num1+num2<<endl;
  }
};
int main()
{
    Addition d1;
    d1.add();

}
