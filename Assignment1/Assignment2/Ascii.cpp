#include <iostream>
using namespace std;
class Ascii_code

{
    char c;
    public : void show()

    {
for(c = 'A'; c <= 'Z'; c++)
cout << c << " = " << (int)c <<endl;
    }

};
  int main()
   {
      Ascii_code d1;
      d1.show();
   }

