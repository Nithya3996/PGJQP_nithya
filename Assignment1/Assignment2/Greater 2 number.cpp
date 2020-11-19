#include <iostream>
using namespace std;

class Check_greater
{
    int num1, num2;
    public: void check()
    {
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    if(num1>num2)
    cout<<"First number "<<num1<<" is the largest";
    else
    cout<<"Second number "<<num2<<" is the largest";
    }
};
int main()
{
 Check_greater d1;
 d1.check();
}

