#include<iostream>
using namespace std;
class Array_check
{
	int countp=0, countn=0, countz=0, arr[10], i;
	public: void display()
	{
	cout<<"Enter 10 numbers : ";
	for(i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<10; i++)
	{
		if(arr[i]<0)
		{
			countn++;
		}
		else if(arr[i]==0)
		{
			countz++;
		}
		else
		{
			countp++;
		}
	}
	cout<<"Positive Numbers = "<<countp<<"\n";
	cout<<"Negative Numbers = "<<countn<<"\n";
	cout<<"Zero = "<<countz<<"\n";
	}
};
int main()
{
Array_check d1;
d1.display();
}
