#include <iostream>
using namespace std;
class Number_check
{
    int number;
    public: void check()
    {
        cout<<"Enter a number:";
        cin>>number;
        if(number>0)
            cout<<"positive"<<endl;
        else if (number<0)
        cout<<"negative"<<endl;
        else
            cout<<"zero"<<endl;
    }
};
int main()
{
    Number_check d1;
    d1.check();

}
