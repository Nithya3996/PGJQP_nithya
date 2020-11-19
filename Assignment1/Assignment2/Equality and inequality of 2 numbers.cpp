#include <iostream>
using namespace std;
class Check_equality
{
    int num1, num2;
    public: void check()
    {
        cout<<"Enter the two number:";
        cin>>num1>>num2;
        if (num1==num2)
            cout<<num1<<"is equal to"<<num2<<endl;
        if (num1!=num2)
        cout<<num1<<"is not equal to"<<num2<<endl;

    }
};
int main()
{
    Check_equality d1;
    d1.check();
}
