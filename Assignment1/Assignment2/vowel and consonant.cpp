#include <iostream>
using namespace std;
class Check_character
{
    char c='z';
    public: void check()
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cout<<c<< "is a vowel"<<endl;
        else
        cout<<c<< "is a consonant"<<endl;

    }
};
int main()
{
    Check_character d1;
    d1.check();
}

