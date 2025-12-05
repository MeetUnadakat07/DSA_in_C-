#include<iostream>
using namespace std;

int clearSetOfBits(int num, int i, int j) {
    int bitMask = ~0 << i + 1;
    num = num & bitMask;
    bitMask = (1 << j) - 1;
    num = num | bitMask;
    return num;
}

int main() {
    int num = 31;
    int i = 3; 
    int j = 1;
    int ans = clearSetOfBits(num, i, j);
    cout << ans;
}