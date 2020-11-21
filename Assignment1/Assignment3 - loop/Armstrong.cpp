#include <iostream>
#include <cmath>
using namespace std;
class Palindrome_check
{
    int num, originalNum, remainder, n = 0, result = 0, power;
    public: void check()
    {
        cout << "Enter an integer: ";
   cin >> num;

   originalNum = num;

   while (originalNum != 0)
        {
      originalNum /= 10;
      ++n;
        }
    originalNum = num;

   while (originalNum != 0)
    {
      remainder = originalNum % 10;
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }
    if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
}
};
int main()
{
   Palindrome_check d1;
   d1.check();
}
