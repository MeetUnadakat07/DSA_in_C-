#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0, end = n - 1;
    while(st < end) {
        if(str[st++] != str[end--]) {
            cout << "Not a valid Palindrome" << endl;
            return false;
        }
    }
    cout << "Valid palindrome" << endl;
    return true;
}

int main() {
    char str[] = "racecar";
    isPalindrome(str, strlen(str));
}