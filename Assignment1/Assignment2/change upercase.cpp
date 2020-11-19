#include <iostream>
using namespace std;
class Convert_character
{
	char ch;
	public: void check()
	{
	 cout<<"Enter a character in uppercase: ";
        cin>>ch;
	//converting the uppercase char to lowercase by adding 32
	//to the ASCII value of the input character
	ch=ch+32;
	cout<<"Entered character in lowercase: "<<ch;

	}

};
int main()
{
 Convert_character d1;
 d1. check();
}
