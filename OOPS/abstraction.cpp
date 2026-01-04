#include<iostream>
using namespace std;

// Abstract class 
class Shape {
public:
    virtual void draw() = 0;        // abstract function / pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Draw a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Draw a square" << endl;
    }
};

int main() {
    // Cannot create an object of Shape class as it is abstract class
    // Shape sh1;
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
}