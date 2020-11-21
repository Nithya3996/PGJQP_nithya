#include<iostream>
using namespace std;
class Display_evennum
{
    int i;
    public: void display()
    {
        for(i=2; i<=20; i+=2)

        {
            cout<<i<<endl;
        }

    }
};
int main()
{
  Display_evennum d1;
  d1.display();
}
