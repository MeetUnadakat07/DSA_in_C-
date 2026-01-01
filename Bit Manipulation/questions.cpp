#include<iostream>
using namespace std;

void checkOddOrEven(int num) {
    int bitMask = 1;
    if((num & bitMask)) {
        cout << num << " is odd" << endl;
    } else {
        cout << num << " is even" << endl;
    }
}

void getIthBit(int num, int i) {
    int bitMask = 1 << i;
    if((num & bitMask)) {
        cout << "The " << i << "th bit is 1" << endl;
    } else {
        cout << "The " << i << "th bit is 0" << endl;
    }
}

void setIthBit(int num, int i) {
    int bitMask = 1 << i;
    cout << "The answwer after setting " << i << "th bit is " << (num | bitMask) << endl;
}

void clearIthBit(int num, int i) {
    int bitMask = ~(1 << i);
    cout << "The number after cleaaring the " << i << "th bit is " << (num & bitMask) << endl;
}

void checkPowerOfTwo(int num) {
    if(!(num & (num - 1))) {
        cout << "The number " << num << " is a power of 2" << endl;
    } else {
        cout << "The number " << num << " is not a power of 2" << endl;
    }
}

void updateIthBit(int num, int i, int val) {
    // clear the iTh bit at first 
    int bitMask = ~(1 << i);
    num = num & bitMask;
    // if val = 0 then it is done
    if(val == 0) {
        cout << "The number after updating the " << i << "th bit with " << val << " is " << num;
    } else {
        // if the val = 1 then set the bit
        bitMask = 1 << i;
        num = (num | bitMask);
        cout << "The number after updating the " << i << "th bit with " << val << " is " << num << endl;
    }
}

void clearLastIBits(int num, int i) {
    int bitMask = (~0) << i;
    cout << "The number after clearing last " << i << " bits is " << (num & bitMask) << endl;
}

void countSetBits(int num) {
    int count = 0;
    while(num > 0) {
        count += (num & 1);
        num = num >> 1;
    }
    cout << "The number of set bits is " << count << endl;
}

int main() {
    checkOddOrEven(5);
    getIthBit(6, 2);
    setIthBit(6, 3);
    clearIthBit(6, 1);
    checkPowerOfTwo(16);
    updateIthBit(7, 3, 1);
    clearLastIBits(15, 2);
    countSetBits(10);
}