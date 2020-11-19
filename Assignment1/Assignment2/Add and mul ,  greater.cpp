#include <iostream>
using namespace std;
class Check_value
{
    int num1, num2, add, mul, greatervalue;
    public: void check()
    {
        cout<<"Enter the number:";
        cin>>num1>>num2;
        add = num1+num2;
        mul = num1*num2;
        cout<<"Addition value is"<<add<<endl;
        cout<<"Multiplication value is"<<mul<<endl;
        if (add>mul)
        {
            greatervalue = add;
        }
        else
            {
                greatervalue = mul;
            }
        cout<<"Greater value of two number is"<<greatervalue<<endl;
    }

};
int main()
{
  Check_value d1;
  d1.check();
}
