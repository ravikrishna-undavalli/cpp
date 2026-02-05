Encapsulation:
Encapsulation is hidding the important data through access specifiers.
By using PUBLIC, PROTECTED, PRIVATE we can control the data access.

Lets us take a Example of a class Bank. In the bank our balance access cann't be given access. Either we can see it or add balance or remove the amount

#include <iostream>
using namespace std;

class Bank
{
  private:
     int balance;
  public:
     void getBalance()
     {
          cout<<"Amount in account: "<<balance;
     }
     void setBalance(int addbal)
     {
          balance=addbal;
     }
}

int main()
{
   Bank obj;  // created a object for Bank class
   obj.setBalance(500);
   obj.getBalance();
}
