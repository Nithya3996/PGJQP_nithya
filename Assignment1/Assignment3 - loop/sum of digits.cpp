#include <iostream>
using namespace std;
class Calculate_numbers
{
    long num,counter,digits,sum=0;
    public:void calculate()

    {
        cout<<"Enter a number of find sum of digits\n";
    cin>>num;//get input from the user for find sum of digits
counter=num;
while( num>0)
    {
    digits=num%10;
    sum=sum+digits;
     num/=10;
    }

cout<<"\nSum of the digits is"<<counter <<"is :" << sum;
    }
};
int main()
{
 Calculate_numbers d1;
 d1.calculate();
}
