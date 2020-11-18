#include <iostream>
using namespace std;
class Area_circle
{
    float PI , radius,area;
    public: void circle()
    {
        cout<<"Enter radius of circle:";
        cin>>radius;
        // Area of Circle = PI x Radius X Radius = PI=3.141
        area = 3.141*radius*radius;
        cout << "Area of circle : " << area<<endl;
    }
};
int main()
{
  Area_circle d1;
  d1.circle();
}
