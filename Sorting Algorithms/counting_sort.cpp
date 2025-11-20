#include<iostream>
#include<climits>
#include<algorithm>                 // For ainbuilt sort method in C++
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n) {               //Can be used when we have a small range of numbers
    int freq[10000] = {0};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    
    // 1st step - O(n)
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }

    // 2nd step - O(range) = maxVal - minVal
    for(int i = minVal, j = 0; i <= maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << "The array without sorting is: " << endl;
    printArr(arr, n);
    cout << "The array after sorting is: " << endl;
    countingSort(arr, n);
    // sort(arr, arr + n);
    printArr(arr, n);
    return 0;
}