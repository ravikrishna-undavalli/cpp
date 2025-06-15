
#include <iostream>
using namespace std;

int main()
{
    int num1=0,num2=0,num3=0;
    for(num1=1;num1<6;num1++)
    {
        for(num2=1;num2<=5-num1;num2++)
        {
            cout<<" ";
        }
        for(num3=1;num3<=num1;num3++)
        {
            cout<<"*";
        }
        for(num2=1;num2<num1;num2++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(num1=1;num1<=5;num1++)
    {
        for(num2=1;num2<=num1;num2++)
        {
            cout<<" ";
        }
        for(num3=4;num3>=num1;num3--)
        {
            cout<<"*";
        }
        for(num2=3;num2>=num1;num2--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}