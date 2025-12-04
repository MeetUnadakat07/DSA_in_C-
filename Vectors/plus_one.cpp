#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    for(int i = n - 1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    vector<int> nums(n + 1, 0);
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9, 9};
    plusOne(digits);
    for(int val : digits) {
        cout << val << " ";
    }
    return 0;
}