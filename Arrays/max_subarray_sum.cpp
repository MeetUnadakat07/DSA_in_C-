#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum1(int arr[], int n) {
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            int currSum = 0;
            for(int i = st; i <= end; i++) {
                currSum += arr[i];
            }
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int maxSubarraySum2(int arr[], int n) {
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++) {     //st = 2
        int currSum = 0;
        for(int end = st; end < n; end++) { //end = 2, 3, 4, 5      (baar baar saareka sum add karne ki zarurat nahi hai, bas last wale ko add kar do)
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int max = maxSubarraySum2(arr, n);
    cout << "The maximum subarray sum is: " << max << endl;
    return 0;
}