#include<iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    double balance;
public:
    BankAccount(int accNo, double balance) {
        this -> accNo = accNo;
        this -> balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balence. Cannot withdraw" << endl;
        }
    }

    void getBalence() {
        cout << "The balence is: " << balance << endl;
    }
};

int main() {
    BankAccount a1(1, 10000);
    a1.getBalence();
    a1.withdraw(500);
    a1.getBalence();
    a1.deposit(1000);
    a1.getBalence();
}