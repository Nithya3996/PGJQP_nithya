#include <iostream>
using namespace std;
class Even_odd
{
    int arr[100];
    int i,size,odd=0,even=0;
    public: void display()
    {
    //input the size of the array
    cout<<"Enter size of the array\n";
    cin>>size;//read input from the user for array size
    //input the array elements
    cout<<"\nEnter elements of the array\n\n";
    for(i=0; i<size; i++)
    {
        cout<<"Enter the element arr["<<i<<"] :";
        cin>>arr[i];//read input from the user for array elements
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"\nTotal even numbers of an array :"<<even<<"\n";
    cout<<"Total odd numbers of an array : "<<odd;
    }
};
int main()
{
   Even_odd d1;
   d1.display();
}
