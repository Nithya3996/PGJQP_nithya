#include<iostream>
using namespace std;
class Check_uppercase
{
  char ch;
  public: void check()
{
 cout << "Enter any character: ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z')
         cout << ch<< " is lowercase alphabet.: ";
    else if(ch >= 'A' && ch <= 'Z')
         cout << ch<< " is uppercase alphabet.";
      else
        cout << ch<< " is not an alphabet. ";
}

};
    int main()
    {
        Check_uppercase d1;
        d1.check();
    }
