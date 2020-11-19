#include <iostream>
using namespace std;
class Check_eligible
{

    int age;
    public : void check()
    {
        cout<<"Enter your age:";
        cin>>age;
        if (age>=18)
        cout<<"You are eligible for voting:";
        else
        cout<<"You are non eligible for voting:"<<endl;

    }
};
int main()
{
 Check_eligible d1;
 d1.check();
}
