
#include <iostream>
using namespace std;
class Calculate_factorial
{
  int n;
    public: void calculate()
    {
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);
    }
    int factorial(int n)
    {
        if(n > 1)
        return n * factorial(n - 1);

    }
};
int main()
{
 Calculate_factorial d1;
 d1.calculate();
}
