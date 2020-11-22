#include <iostream>
using namespace std;
class Highest_value
{
    int total;
    int highest;
    int secondHighest;
    public: void display()
    {
    cout << "Enter total number of elements : ";
    cin >> total;
    int arr[100];
    for (int i = 0; i < total; i++)
    {
        cout << "Enter array element : " << endl;
        cin >> arr[i];
    }
    highest = arr[0];
    secondHighest = arr[0];
    for (int i = 1; i < total; i++)
    {
        {
            secondHighest = highest;
            highest = arr[i];
        }
    }
    cout << "Second highest number in the given array is : " << secondHighest << endl;
    }
};
int main()
{
 Highest_value d1;
 d1.display();
}
