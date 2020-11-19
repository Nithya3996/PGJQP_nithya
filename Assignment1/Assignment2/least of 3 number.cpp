#include <iostream>
using namespace std;
class Least_number
{
int a=10, b=25, c=9;
public: void Leastvalue()
{
if (a <= b && a <= c)
      cout << a << " is smallest" << endl;
   else if (b <= a && b <= c)
      cout << b << " is smallest" << endl;
   else
      cout << c << " is smallest" << endl;
}
};
int main()
{
Least_number d1;
d1.Leastvalue();
}


