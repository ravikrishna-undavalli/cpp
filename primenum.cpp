// Logic to find wheather given number is prime or not using for loop

#include <iostream>
using namespace std;

int main()
{
   
    int num=0, count=0;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<num;i++)
    {
       if(num%i==0)
       {
           count++;
       }
    }
     if(count>1)
     {
        cout<<"Given number is not prime"<<endl;
     }
     else
     {
        cout<<"Given number is prime"<<endl;
     }
}