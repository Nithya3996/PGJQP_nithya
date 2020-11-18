#include <iostream>
using namespace std;
class Multiplication
{
 int num1=45 , num2=25 , num3=30;
 public: void mul()
 {
     cout<<"Total value is :"<<num1*num2*num3<<endl;
 }

};
int main()
{
  Multiplication d1;
  d1.mul();
}
