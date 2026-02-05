#include <iostream>
using namespace std;

class Bank
{
  private:
     int balance;
  public:
     void getBalance()
     {
          cout<<"Amount in account: "<<balance<<endl;
     }
     void setBalance(int addbal)
     {
         if(balance>=0)
             balance+=addbal;
     }
     void removeBalance(int bal)
     {
         if((balance>0) && (balance>=bal))
         {
             balance-=bal;
         }
         else
         {
             cout<<"Amount not available"<<endl;
         }
     }
};

int main()
{
    int option, bal;
    while(1)
    {
       Bank obj;  // created a object for Bank class
       cout<<"1.setBalance"<<endl<<"2.removeBalance"<<endl<<"3.getBalance"<<endl<<"4.exit"<<endl;
       cout<<"Enter the option: ";
       cin>>option;
       switch(option)
       {
           case 1:
                cout<<"Enter the Amout: ";
                cin>>bal;
                obj.setBalance(bal);
                break;
           case 2:
                cout<<"Enter the Amout: ";
                cin>>bal;
                obj.removeBalance(bal);
                break;
           case 3:
                obj.getBalance();
                break;
           case 4:
                exit(0);
       }
    }
}
