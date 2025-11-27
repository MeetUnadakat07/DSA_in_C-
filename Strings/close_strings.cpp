#include<bits/stdc++.h>
using namespace std;

bool isCloseString(string str1, string str2) {
    if(str1 == str2) return true;
    if(str1.length() != str2.length()) return false;

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    // to store the frequency of the characters
    for(int i = 0; i < str1.length(); i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];
        freq1[ch1 - 'a']++;         // store the index of the character
        freq2[ch2 - 'a']++;
    }

    // check if a character is present in only one string and not in the other
    for(int i = 0; i < 26; i++) {
        if((freq1[i] == 0 && freq2[i] > 0) || (freq1[i] > 0 && freq2[i] == 0)) {
            return false;
        }
    }

    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());
    if(freq1 == freq2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string str1 = "cabbba";
    string str2 = "abbccc";
    if(isCloseString(str1, str2)) {
        cout << "Both the strings are close strings" << endl;
    } else {
        cout << "Both the strings are not close strings" << endl;
    }
    return 0;
}