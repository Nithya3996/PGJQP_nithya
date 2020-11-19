#include <iostream>
using namespace std;
class Check_greater
{
    int number;
    public: void check()
    {
        cout<<"Enter the number : ";
        cin>>number;
        if(number<10)
            cout <<"Your number is smaller than 10\n\n";
        else
            cout<<"Your number is greater than 10\n\n";
    }
};
int main()
{
    Check_greater d1;
    d1.check();
}
