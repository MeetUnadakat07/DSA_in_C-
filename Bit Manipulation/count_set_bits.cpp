#include<iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while(num > 0) {
        int lastDig = num & 1;
        count += lastDig;
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans = countSetBits(num);
    cout << "The number of set bits are: " << ans << endl;
    return 0;
} 