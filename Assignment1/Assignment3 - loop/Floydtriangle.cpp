
#include <iostream>
using namespace std;
class Floyd_triangle
{
      int height, value = 1;
    public: void display_number()
    {
     cout << "Enter the height of the triangle : " << endl; cin >> height;
    cout << "\n"
         << "Floyd's triangle of height " << height << " :"
         << "\n"
         << endl;

    for (int i = 0; i < height; i++)
    {
        //4
        for (int j = 0; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
        }

};
int main()
{
  Floyd_triangle d1;
  d1.display_number();
}
