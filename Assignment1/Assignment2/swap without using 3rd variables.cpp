#include <iostream>
using namespace std;
class swaping
{
int a,b ;
public: void swaping_numbers()
{
cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
  cout << "\nAfter swapping, Numbers are :: " << endl;
    cout << "\n\ta = " << a << ", b = " << b << endl;
}
};
int main()
{
swaping d1;
d1.swaping_numbers();
}






