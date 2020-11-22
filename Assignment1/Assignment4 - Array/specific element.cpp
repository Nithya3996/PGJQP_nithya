#include <iostream>
using namespace std;
#define ARRAY_SIZE 5
class Array_Check
{
    int numbers[ARRAY_SIZE], i ,search_key;
    public: void display()
    {
	cout<<"Simple C++ Example Program for Simple Searching In Array\n";

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }

    cout<<"Enter the key\n";
    cin>>search_key;

    /*  Simple Search with Position */
	for (i = 0; i < ARRAY_SIZE; i++)
    {
		if(numbers[i] == search_key)
		{
			cout<<"Search Element Found . Position Is :"<< (i+1) <<" \n";
			break;
		}
		if(i == ARRAY_SIZE - 1)
		{
			cout<<"Search Element is not in Array.\n";
		}
    }

}
};
int main()
{
Array_Check d1;
d1.display();
}
