#include<iostream>
using namespace std;

int diagonalSum(int matrix[][4], int n) {
    int sum = 0;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(i == j) {
    //             sum += matrix[i][j];
    //         } else if(i + j == n - 1) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // }

    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
        if(i != n - i - 1) {
            sum += matrix[i][n - i - 1];
        }
    }

    return sum;
}

int main() {
    int matrix[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matrix2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = diagonalSum(matrix, 4);
    cout << sum;
    // int sum = diagonalSum(matrix2, 3);
    // cout << sum;
    return 0;
}