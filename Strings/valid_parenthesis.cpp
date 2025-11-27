#include<bits/stdc++.h>
using namespace std;

bool isValidParentheses(string str) {
    if(str.length() % 2 == 1) {
        return false;
    }
    vector<char> v;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            v.push_back(str[i]);
        } else {
            if(v.size() == 0) {
                return false;
            } else {
                if(str[i] == ')' && v.back() == '(') {
                    v.pop_back();
                } else if(str[i] == ']' && v.back() == '[') {
                    v.pop_back();
                } else if(str[i] == '}' && v.back() == '{') {
                    v.pop_back();
                } else {
                    return false;
                }
            }
        }
    }
    if(v.size() == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string str = "([])";
    if(isValidParentheses(str)) {
        cout << "The string is a valid parenthesis." << endl;
    } else {
        cout << "The string is not a valid parenthesis." << endl;
    }
}