#include <iostream>
using namespace std;
class Addition
{
    int num1, num2, answer;
    public: void add()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>num1>>num2;
        answer=num1+num2;
        cout<<"The Addition of two number is"<<answer<<endl;

        if(answer<100)
            cout<<"The addition of two number is smaller than 100"<<endl;
        else
         cout<<"The addition of two number is greater than 100"<<endl;

    }
};
int main()
{
    Addition d1;
    d1.add();
}
