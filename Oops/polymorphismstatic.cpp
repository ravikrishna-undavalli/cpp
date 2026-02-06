Polymorphism:
   Poly->many
   morph->forms
so we can simply say many forms
In short we have functions that are having same name but different in paramaters or return type

There are Two types of polymorphism
1. Static Binding / Fast Binding
2. Dyanmic Binding / Slow Binding

static Binding:
      Static Binding is having same function name but different in parameters or return type.
Example:
  int add(int a, int b);
  float add(float a, float b);

Lets discuss with an example program

#include <iostream>
using namespace std;

void add(int a, int b)
{
   int sum=0;
   sum=a+b;
   cout<<"The integer sum is: "<<sum<<endl;
}

void add(double a, double b)
{
   double sum=0;
   sum=a+b;
   cout<<"The double sum is: "<<sum<<endl;
}

int main()
{
   add(12, 13);
   add(12.3, 12.5);
}
