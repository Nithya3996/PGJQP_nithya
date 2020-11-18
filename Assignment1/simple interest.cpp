#include <iostream>
using namespace std;
class interest
{
    float p,r,t,si,amount;
    public: void show()
    {
        cout<<"Enter the principle amount:";
        cin>>p;
        cout<<"Enter the rate of interest:";
        cin>>r;
        cout<<"Enter the number of years:";
        cin>>t;
        si=(p*r*t)/100;
        amount=si+p;

        cout<<"principle amount:"<<p<<endl;
        cout<<"rate of interest:"<<r<<endl;
        cout<<"number of years:"<<t<<endl;
        cout<<"interest:"<<si<<endl;
        cout<<"total amount:"<<amount<<endl;

    }
};
int main()
{
    interest d1;
    d1.show();
}
