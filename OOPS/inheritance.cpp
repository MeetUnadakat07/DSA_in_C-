#include<iostream>
using namespace std;

// ---------------- Multi level inheritance -----------------------
// Parent class 
class Animal {
public:
    string color;
    void eat() {
        cout << "Eats" << endl;
    }
    void breathe() {
        cout << "Breathes" << endl;
    }
};

// Child class
class Mammal : public Animal {
public:
    string bloodType;
    Mammal() {
        bloodType = "Warm";
    }
};

// Grand child class 
class Dog : public Mammal {
public:
    void bark() {
        cout << "Barks" << endl;
    }
};

// -------------------- Multiple inheritance -------------------
// Base class 
class Teacher {
    public:
    int salary;
    string subject;
};

// Base class 
class Student {
public:
    int rollNo;
    float cgpa;
};

// Child class 
class TA : public Teacher, public Student {
public:
    string name;
};


// ------------------- Hierarchial inheritance ---------------------
/*
class Animal {
public:
    void eat() {
        cout << "Eats" << endl;
    }
    void breathe() {
        cout << "Breahes" << endl;
    }
};

class Fish : public Animal {
public:
    void swim() {
        cout << "Swims" << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Walks" << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Flies" << endl;
    }
};
*/

int main() {
    Dog d1;
    d1.bark();
    cout << d1.bloodType << endl;
    d1.breathe();
    d1.eat();

    TA ta1;
    ta1.rollNo = 184;
    ta1.name = "Meet";
    ta1.subject = "C++";
    ta1.cgpa = 9.2;
    ta1.salary = 10000;
    cout << ta1.rollNo << endl;
    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.cgpa << endl;
    cout << ta1.salary << endl;

    // Fish f1;
    // f1.eat();
    // f1.breathe();
    // f1.swim();
}