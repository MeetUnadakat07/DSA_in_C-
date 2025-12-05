#include<iostream>
using namespace std;

int pow(int num, int index) {
    int ans = 1;

    while(index > 0) {
        int lastBit = index & 1;

        if(lastBit) {
            ans *= num;
        }
        num = num * num;
        index = index >> 1;
    }
    return ans;
}

int main() {
    int num, index;
    cout << "Enter the base: ";
    cin >> num;
    cout << "Enter the index: ";
    cin >> index;
    int ans = pow(num, index);
    cout << "The value of " << num << "^" << index << " = " <<  ans << endl;
    return 0;
}