#include <iostream>
using namespace std;
class Display_table

{
    int n=0;
    public: void display()
    {

        cout<<"Enter number:";
        cin>>n;
        table(n);
    }
    int table(int n)
    {
        int t=1;
        cout<<"Table of"<<n<<"is:"<<endl;
        for(int i=1; i<=10; i++)
        {
            t=n*i;
            cout<<n<<"*"<<i<<"="<<t<<endl;
        }
    }
};
int main()
{
  Display_table d1;
  d1.display();
}
