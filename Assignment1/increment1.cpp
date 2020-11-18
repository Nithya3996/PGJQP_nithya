#include <iostream>
using namespace std;
class Increment_number
{
    int num,ans;
    public : void display()
    {
        cout<<"Enter the number:";
        cin>>num;
        ans=num+1;
        cout<<"Final number is"<<ans<<endl;
        }
};
int main()
{
 Increment_number obj;
 obj.display();
}
