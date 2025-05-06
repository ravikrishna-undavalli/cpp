#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout<<++num<<endl; //output: 11 num:11
    cout<<num++<<endl; //output: 11 num:12
    cout<<--num<<endl; //output: 11 num:11
    cout<<num--<<endl; //output: 11 num:10
}