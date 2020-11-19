#include <iostream>
 using namespace std;
 class Switchcase_char
 {
     char ch;
     public: void display()
     {
     cout<<"Enter any alphabet: ";
    cin>>ch;

     switch(ch)
{

        case 'a': cout<<"vowel";
            break;
        case 'e': cout<<"vowel";
            break;
        case 'i': cout<<"vowel";
            break;
        case 'o': cout<<"vowel";
            break;
        case 'u': cout<<"vowel";
            break;
        case 'A': cout<<"vowel";
            break;
        case 'E': cout<<"vowel";
            break;
        case 'I': cout<<"vowel";
            break;
        case 'O': cout<<"vowel";
            break;
        case 'U': cout<<"vowel";
            break;
        default: cout<<"consonant";
}
     }

 };
 int main()
 {
  Switchcase_char d1;
  d1.display();
 }
