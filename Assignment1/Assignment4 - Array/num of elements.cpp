#include <iostream>
using namespace std;
class Total_element
{
    int arr[10]={},count=0;
    public: void display()
    {
     for(int i=0;i<4;i++)
    {
        cout<<"Enter an element:";
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]!='\0')
            count++;
    }
    cout<<"Elements in array are: "<<count;
    }

};
int main()
{
  Total_element d1;
  d1.display();
}
