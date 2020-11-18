#include <iostream>
using namespace std;
class Rectangle
{
 int width,length, perimeter, area;
 public: void formula()
 {
     cout<<"Enter the length of the rectangle :";
     cin>>length;
     cout<<"Enter the width of the rectangle :";
     cin>>width;
     area=length*width;
     perimeter=2*(length+width);
     cout<<" The area of the rectangle is : "<< area << endl;
     cout<<" The perimeter of the rectangle is : "<< perimeter << endl;
 }
};
int main()
{
    Rectangle d1;
    d1.formula();
}
