#include<iostream>
using namespace std;

class Student {
    string name;
    float cgpa;
public:
    void getPercentage() {
        cout << (cgpa * 10) << "%" << endl;
    }
    
    // Setters 
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCGPA(float cgpaVal) {
        cgpa = cgpaVal;
    }

    // Getters 
    string getName() {
        return name;
    }

    float getCGPA() {
        return cgpa;
    }
};

class User {
    int id;
    string username;
    string password;
    string bio;

    void deactivate() {
        cout << "Deleting account" << endl;
    } 

    void editBio(string newBio) {
        bio = newBio;
    }
};

class Car {
    string name;
    string color;
public:
    Car() {
        cout << "This is non-parameterized constructor" << endl;
    }

    Car(string name, string color) {
        cout << "This is parameterized constructor" << endl;
        this -> name = name;
        this -> color = color;
    }

    // Copy constructor -> Can also be created by default by the compiler 
    Car(Car &original) {
        cout << "Copying.." << endl;
        name = original.name;
        color = original.color;
    }

    void start() {
        cout << "Car is starting..." << endl;
    }
    void stop() {
        cout << "The car is stopping..." << endl;
    }
    void getName() {
        cout << "Car name: " << name << endl;
    }
    void getColor() {
        cout << "Car color: " << color << endl;
    }
};

// ---------------------- Static keyword  --------------------------------
class Example {
public:
static int x;                       // Static variable of class
    void counter() {
        static int count = 0;       // Static variable of function
        cout << count++ << endl;
    }
};

int Example::x = 0;                 // Initialization of class static variable (scope resolution operator)

// ------------------- Friend class and funtion --------------------------

class A {
    string secret = "secret data";
    friend class B;             // declare B as friend of A
    friend void revealSecret(A &obj);       // revealSecret function is now a friend of A
};

class B {
public:
    void showSecret(A &obj) {
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj) {
    cout << obj.secret << endl;
}

int main() {
    Student s1;         // Object
    Car c0;
    Car c1("Mercedes Benz", "white");
    c1.getName();
    c1.getColor();
    Car c2(c1);
    c2.getName();
    c2.getColor();

    Example e1;
    Example e2;
    Example e3;
    e1.counter();
    e2.counter();
    e3.counter();
    cout << e1.x++ << endl;
    cout << e2.x++ << endl;
    cout << e3.x++ << endl;

    A a1;
    B b1;
    b1.showSecret(a1);
    revealSecret(a1);
}