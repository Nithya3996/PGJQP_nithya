#include <iostream>
using namespace std;
class reverseNumber
{
    int n, reversedNumber = 0, remainder;
    public: void display()
    {
    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
        {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
        }
        {
        cout << "Reversed Number = " << reversedNumber;
        }
    }
};
int main()
{
   reverseNumber d1;
   d1.display();
}
