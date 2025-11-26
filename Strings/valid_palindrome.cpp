#include<iostream>
#include<cstring>
#include<string>                                    // C++ STL header file
using namespace std;

bool isPalindrome(string str, int n) {
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
    // char str[] = "racecar";
    // isPalindrome(str, strlen(str));
    string str;
    cout << "Enter a string you want to check for: ";
    getline(cin, str);
    isPalindrome(str, str.length());
}