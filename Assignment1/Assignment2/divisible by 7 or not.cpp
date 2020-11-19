#include <iostream>


 using namespace std;

 int main()
 {

     int num = 0, sum = 0;

     unsigned Divisible = (num % 7 == 0);

         do
            {

             cout << "Enter an integer: ";
             cin >> num;
             cout << endl;

             while (Divisible){

            if (cin.peek() == '\n' && !cin.fail()) break;
                cout << "That's not a number, try again: ";
                cin.clear();
                cin.ignore(INT_MAX, '\n');

        }

        while
            (Divisible) {
            if (char(num % 7 != 0))
                cout << "It's not divisible by 7, try again." << endl;
                break;
        }

        while
            (Divisible) {
            if (num % 7 == 0)
            cout << "It's divisible by 7." << endl;
            break;
        }


    }

    while (num % 7 != 0 || !cin);



 }
