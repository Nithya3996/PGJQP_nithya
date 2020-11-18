#include <iostream>
using namespace std;
class Square_area
{
  int square_area , square_side;
  public : void area()
  {
      cout<<"enter the side of square:";
      cin>>square_side;
      square_area=square_side*square_side;
      cout<<"Area of square is"<<square_area<<endl;

  }
};
int main()
{
    Square_area d1;
    d1.area();

}
