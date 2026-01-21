// Logic to check wheather the given number is positive or Negative number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num>0)
    {
        cout<<"Positive Number"<<endl;
    }
    else if(num<0)
    {
        cout<<"Negative Number"<<endl;
    }
}
