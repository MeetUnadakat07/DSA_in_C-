#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isValidAnagram(string s, string t) {
    if(s.length() != t.length()) {
        return false;
    }
    int count[26] = {0};
    for(int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'a';
        count[idx]++;
    }
    for(int i = 0; i < t.length(); i++) {
        int idx = t[i] - 'a';
        count[idx]--;
        if(count[idx] == -1) return false;
    }
    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";
    if(isValidAnagram(s, t)) {
        cout << "The strings are valid anagrams" << endl;
    } else {
        cout << "The strings are not valid anagrams" << endl;
    }
    return 0;
}