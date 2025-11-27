#include<bits/stdc++.h>
using namespace std;

bool isStringSwap(string str1, string str2) {
    if(str1 == str2) {
        return true;
    } else if(str1.length() != str2.length()) {
        return false;
    }
    vector<int> index;
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != str2[i]) {
            index.push_back(i);
        }
    }
    if(index.size() != 2) {
        return false;
    }
    if(str1[index[0]] == str2[index[1]] && str1[index[1]] == str2[index[0]]) {
        return true;
    }
    return false;
}

int main() {
    string str1 = "bank";
    string str2 = "kanb";
    if(isStringSwap(str1, str2))  {
        cout << "Both the strings are string swaps of each other" << endl;
    } else {
        cout << "Both the strings are not string swaps of each other" << endl;
    }
    return 0;
}