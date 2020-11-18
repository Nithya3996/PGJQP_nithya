#include <iostream>
using namespace std;
class Data_type
{
 float age, mark1, mark2,mark3;
char name[20];
public: void display()
{
    cout<<"enter the student name:";
    cin>>name;
    cout<<"enter the student age:";
    cin>>age;
    cout<<"enter the student mark for m1, m2, m3:";
    cin>>mark1>>mark2>>mark3;

    cout<<"student name is:"<<name<<endl;
    cout<<"student age is:"<<age<<endl;
    cout<<"student total mark is:"<<mark1+mark2+mark3<<endl;
}

};
int main()
{
    Data_type d1;
    d1.display();
}
