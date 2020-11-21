#include<iostream>
using namespace std;
class Display_evennum
{
    int i;
    public: void display()
    {
        for(i=1; i<200; i=i+2)

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
