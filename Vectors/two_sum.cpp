#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {
    vector<int> ans;
    int st = 0, end = arr.size() - 1;
    while(st < end) {
        if(arr[st] + arr[end] == target) {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(arr[st] + arr[end] > target) {
            end--;
        } else {
            st++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 19;
    vector<int> ans = twoSum(arr, target);
    if(ans.size() == 0) {
        cout << "There is no such pair." << endl;
    } else {
        cout << "Found the pair at: " <<endl;
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}