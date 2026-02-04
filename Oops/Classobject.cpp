// Logic to show how to creating a class and assign a value to class Data Member 

#include <iostream>
using namespace std;

// Created a class with a name Car
class Car {
public:
    int speed;

    void drive() {
        cout << "Car is driving at " << speed << " km/h"<<endl;
    }
};

int main() {
    Car c;        // object on stack
    c.speed = 80;
    c.drive();
    return 0;
}
