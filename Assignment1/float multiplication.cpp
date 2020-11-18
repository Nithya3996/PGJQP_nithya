#include <iostream>
using namespace std;
class Multiply_floatnum
{
 double Firstnumber, Secondnumber , Finalanswer;
 public: void mul()
 {
     cout<<"Enter the Firstnumber is:";
     cin>>Firstnumber;
     cout<<"Enter the Secondnumber is:";
     cin>>Secondnumber;
     Finalanswer = Firstnumber*Secondnumber;
     cout<<"Finalanswer is:"<<Finalanswer<<endl;
 }
};
int main()
{
    Multiply_floatnum d1;
    d1.mul();
}
