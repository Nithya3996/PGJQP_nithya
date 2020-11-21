#include <iostream>
using namespace std;
class Check_range
{
   int low, high, i;

   public: void Display_numbers()
   {
       bool isPrime = true;
       cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high)
        {
        isPrime = true;
        if (low == 0 || low == 1)
        {
            isPrime = false;
        }
        else
        {
            for (i = 2; i <= low / 2; ++i)
            {
                if (low % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << low << " ";

        ++low;
    }

   }
};

int main()
{
  Check_range d1;
  d1.Display_numbers ();
}




