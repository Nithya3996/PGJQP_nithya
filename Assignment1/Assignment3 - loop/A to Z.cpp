#include <iostream>
using namespace std;
class Alphabets
{
    char i;
    public: void display()
    {
        cout << "The Alphabets from A to Z are: \n";
        for (i = 'A'; i <= 'Z'; i++)
        {
            cout << i <<" ";
        }
    }
};
int main()
{
  Alphabets d1;
d1.display();
}
