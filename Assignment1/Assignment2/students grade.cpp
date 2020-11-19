#include<iostream>
using namespace std;
class Student_grades
{
        int mark[5], i;
        float sum=0,avg;
        public: void display()
        {
         cout<<"\nEnter Marks in 5 subjects :: \n";
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter Marks[ "<<i+1<<" ] :: ";
                cin>>mark[i];
                sum=sum+mark[i];
        }

        avg=sum/5;

        cout<<"\nYour Grade is :: ";
        if(avg>=90)
        {
                cout<<"[ A ]\n";
        }
        else if(avg>=80 && avg<90)
        {
                cout<<"[ B ]\n";
        }
        else if(avg>=60 && avg<80)
        {
                cout<<"[ C ]\n";
        }
        else if(avg>=45 && avg<60)
        {
            cout<<"[ D ]\n";
        }
        else if(avg<45)
        {
                cout<<"[ Fail ]\n";
        }
        }




};
int main()
{
  Student_grades d1;
  d1.display();
}
