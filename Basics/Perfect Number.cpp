// Logic to find Given number is perfect Number or not

#include<iostream>
using namespace std;

int main()
{
  int num=0,sum=0;
  cout<<"Enter the number:";
  cin>>num;
  
  for(int i=1;i<num;i++)
  {
     if(num%i==0)
     {
        sum=sum+i;
     }
  }
  
  if(sum==num)
  {
    cout<<"The Given number is perfect Number";
  }
  else
  {
     cout<<"The Given number is Not a perfect Number";
  }
}