#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        // int min = arr[i];
        int minIdx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                // min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "The array without sorting is: " << endl;
    printArr(arr, n);
    cout << "The array after sorting is: " << endl;
    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}