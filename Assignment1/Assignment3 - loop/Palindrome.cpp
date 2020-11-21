#include <iostream>
using namespace std;
class Palindrome_check
{
int n, num, digit, rev = 0;
public:void display()
{
cout << "Enter a positive number: ";
cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     }
     while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
}
};

int main()
{
 Palindrome_check d1;
 d1.display();
}
