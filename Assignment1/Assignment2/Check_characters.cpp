#include <iostream>
using namespace std;
class Check_character
{
    char c;
    public: void check()
    {
        cout<<"Enter a character"<<endl;
        cin>>c;
        if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
            cout<<c<<"is an Alphabet.";
        else
            cout<<c<<"is not an Alphabet.";
    }
};
int main()
{
    Check_character d1;
    d1.check();
}
