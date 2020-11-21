#include<iostream>
using namespace std;
class Count_numbers
{
   int num, count = 0;
   public: void countnum()
   {
    cout << "Enter a number \n";
    cin  >> num;
    while (num > 0)
        {
            num = num / 10;
      count++;
    }
    cout << "Number of digits in a number is " << count;
   }
};

int main()
{
Count_numbers d1;
d1.countnum();
}
