#include<iostream>
using namespace std;
class Display_name
{
    int input;
    public: void display()
    {
        int input=1 ;
while (input<=10)
{
  cout<<"\n"<<input;
input++;
}
}
};
int main()
{
  Display_name d1;
  d1.display();
}
