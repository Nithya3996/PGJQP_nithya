#include <iostream>
using namespace std;
class Check_evenodd
{
    int n;
    public: void check()

    {
cout<<"Enter an integer:";
cin>>n;
if (n%2==0)
    cout<<n<<"is even.";
else
    cout<<n<<"is odd.";
    }
};
int main()
{
Check_evenodd  d1;
d1.check();
}
