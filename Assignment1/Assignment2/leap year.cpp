#include <iostream>
using namespace std;
class Check_leapyear
{
    int year;
    public: void check()
{
 cout << "Enter a year: ";
    cin >> year;
if (year % 4 == 0)
        {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";
}
};
int main()
{
  Check_leapyear d1;
  d1.check();

}
