#include <iostream>
using namespace std;
class Power_base
{
    int bs, ex, num=1,i;
    public: void calculate()
    {
    cout << " Input the base: ";
    cin >> bs;
    cout << " Input the exponent: ";
	cin>>ex;

    for (i = 1; i <=ex; i++)
    {
       num=num*bs;
    }
	cout <<bs<<" ^ "<<ex<<" = "<<num<<endl ;
    }
};
int main()
{
 Power_base d1;
 d1.calculate();
}
