#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num1 = 10.231231456, num2 = 20.512345;
    float num3 = (num1+num2)*11.234;
    cout<<setprecision(2)<<num3<<endl;
}
