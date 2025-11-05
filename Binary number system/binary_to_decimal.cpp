#include <iostream>
using namespace std;

int binToDec(long bin) {
    int dec = 0;
    int pow = 1;
    while(bin > 0) {
        int rem = bin % 10;
        dec = rem * pow + dec;
        bin /= 10;
        pow *= 2;
    }
    return dec;
}

int main() {
    long num = 1010101010;
    int ans = binToDec(num);
    cout << ans << endl;
    return 0;
}