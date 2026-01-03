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

int main() {
    Student s1;         // Object
    Car c0;
    Car c1("Mercedes Benz", "white");
    c1.getName();
    c1.getColor();
    Car c2(c1);
    c2.getName();
    c2.getColor();
}