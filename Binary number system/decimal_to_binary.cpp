#include <iostream>
using namespace std;

long decToBin(int dec) {
    long bin = 0;
    int pow = 1;
    while(dec > 0) {
        int rem = dec % 2;
        bin = rem * pow + bin;
        dec /= 2;
        pow *= 10;
    }
    return bin;
}

int main() {
    int num = 300;
    long ans = decToBin(num);
    cout << ans << endl;
    return 0;
}