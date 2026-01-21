#include <iostream>
using namespace std;

class stu
{
public:
       int *x;
 
    stu(int val)
    {
        x=new int(val);
    };
    stu(const stu& other)
    {
        x=new int(*other.x);
    }
    ~stu()
    {
        delete x
    }
};


int main()
{
    stu obj1(10);
    stu obj2=obj1;
    cout << *obj1.x << obj1.x<<endl;
    cout << *obj2.x << obj2.x<< endl;

    return 0;
}
