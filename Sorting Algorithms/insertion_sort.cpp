#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            swap(arr[j], arr[j + 1]);
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << "The array without sorting is: " << endl;
    printArr(arr, n);
    cout << "The array after sorting is: " << endl;
    insertionSort(arr, n);
    printArr(arr, n);
    return 0;
}