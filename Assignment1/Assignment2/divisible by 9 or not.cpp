#include <iostream>
using namespace std;
class Check_divisible
{
    int num;
    public: void check()
    {
        cout<<"Enter the number:"<<endl;
        cin>>num;
        if(num%9==0)

         cout<<"Entered number is divisible by 9"<<endl;

        else

         cout<<"Entered number is not divisible by 9"<<endl;


    }
};
int main()
{
   Check_divisible d1;
   d1.check();
}
