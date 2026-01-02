#include<iostream>
using namespace std;

int clearSetOfBits(int num, int i, int j) {
    int leftMask = ~0 << (j + 1);
    int rightMask = (1 << i) - 1;
    int mask = leftMask | rightMask;
    return num & mask;
}

int main() {
    int num = 31;
    int i = 1; 
    int j = 3;
    int ans = clearSetOfBits(num, i, j);
    cout << ans;
}