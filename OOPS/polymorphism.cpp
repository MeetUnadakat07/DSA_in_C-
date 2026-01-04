#include<iostream>
using namespace std;

// ---------------------- Compile time polymorphism --------------------

// ------------------- Function overloading  ------------------

class Print {
    public:
    void show(int x) {
        cout << x << endl;
    }
    void show(string str) {
        cout << str << endl;
    }
    void show(int x, string str) {
        cout << str << ", " << x << endl;
    }
};

// ------------------------- Operator overloading ---------------------
class Complex {
    int real;
    int img;
    public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void show() {
        cout << real << " + " << img << "i" << endl;
    }
    
    Complex operator +(Complex &obj) {
        int resReal = this -> real + obj.real;
        int resImg = this -> img + obj.img;
        Complex c3(resReal, resImg);
        return c3;
    }
};

// ---------------------- Run time polymorphism --------------------

// ------------------- Function overridding  ------------------

class Parent {
public: 
    void show() {
        cout << "Parent class show" << endl;
    }

    // ----------------- Virtual Function ---------------------
    virtual void hello() {
        cout << "Parent hello" << endl;
    }
};

class Child : public Parent {
    public: 
    void show() {
        cout << "Child class show" << endl;
    }
    
        void hello() {
            cout << "Child hello" << endl;
        }
};

int main() {
    Print o1;
    o1.show(5);
    o1.show("Hello");
    o1.show(5, "Hello");
    
    Complex c1(1, 2);
    Complex c2(3, 4);
    c1.show();
    c2.show();
    Complex c3 = c1 + c2;
    cout << "Result = ";
    c3.show();

    Child ch1;
    ch1.show();

    Parent *ptr;    
    ptr = &ch1;
    // Parent function call (if not virtual) -> datatype of pointer
    // Child function call (due to virtual) -> points to child object
    ptr -> hello();     
}