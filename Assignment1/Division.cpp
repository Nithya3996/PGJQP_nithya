#include <iostream>
using namespace std;
class Division
{
int dividend, divisor, quotient, reminder;
public: void div()
{
    cout<<"enter the dividend value:";
    cin>>dividend;
    cout<<"enter the divisor value:";
    cin>>divisor;
    quotient = dividend/divisor;
    reminder = dividend % divisor;
    cout<<"the quotient of the division is:"<<quotient<<endl;
    cout<<"the reminder of the divisor is:"<<reminder<<endl;
    }
};
int main()
{
    Division d1 ;
    d1.div();
}

