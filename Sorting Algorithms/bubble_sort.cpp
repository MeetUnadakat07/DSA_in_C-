#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    bool isSwap = false;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap) {           //Array is already sorted
            return;
        }
    }
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "The initial array is: " << endl;
    printArr(arr, n);
    cout << "The array after sort is: " << endl;
    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}