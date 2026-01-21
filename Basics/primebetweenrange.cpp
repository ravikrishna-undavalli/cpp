#include<iostream>
using namespace std;

int main()
{
    int num1=0, num2=0, flag=0;
    cout<<"Enter the Range1:";
    cin>>num1;
    cout<<"Enter the Range2:";
    cin>>num2;
    for(int i=num1;i<=num2;i++)
    {
      flag=0;
      for(int j=2;j<i;j++)
      {
         if(i%j==0)
         {
           flag=1;
           break;
         }
      }
      if(flag==0)
      {
         cout<<i<<" ";
      }
    }
}
