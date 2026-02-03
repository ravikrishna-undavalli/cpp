//Logic to find given number is Palindrome or Not

#include <iostream>
using namespace std;

int main()
{
    int num=0, dig=0, sum=0;
    cout<<"Enter the number:";
    cin>>num;
    
    int val=num;
    while(val!=0)
    {
        dig=val%10;
        sum=sum*10+dig;
        val=val/10;
    }
    if(num==sum)
    {
        cout<<"Given Number is palindrome";
    }
    else
    {
        cout<<"Given Number is Not a palindrome";
    }
}
