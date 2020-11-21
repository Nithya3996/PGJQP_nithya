#include <iostream>
using namespace std;
class Calculate_factorial
{
 int n = 4, fact = 1, i;
 public: void calculate()
 {
   for(i=1; i<=n; i++)
   fact = fact * i;
   cout<<"Factorial of "<<n<<" is "<<fact;
}

};
int main()
{
 Calculate_factorial d1;
 d1.calculate();
}

