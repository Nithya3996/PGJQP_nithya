#include <iostream>
using namespace std;
class Naturalnumber
{
int i,sum=0;
public: void display()
{
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
}
};
int main()
{
Naturalnumber d1;
d1.display();
}
