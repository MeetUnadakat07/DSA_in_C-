#include<iostream>
using namespace std;

void searchInSortedMatrix(int matrix[][4], int n, int m, int key) {
    // Brute Force - O(n*m)
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         if(matrix[i][j] == key) {
    //             cout << "Found at " << i << ", " << j << endl;
    //         }
    //     }
    // }

    // Slightly optimized - O(n*log(m))
    // for (int i = 0; i < n; i++) {
    //     int st = 0, end = m - 1;

    //     while (st <= end) {
    //         int mid = (st + end) / 2;

    //         if (matrix[i][mid] == key) {
    //             cout << "Found at " << i << ", " << mid << endl;
    //             return;
    //         }

    //         if (key < matrix[i][mid]) {
    //             end = mid - 1;
    //         } else {
    //             st = mid + 1;
    //         }
    //     }
    // }

    // Staircase Search - O(n + m)      As both rows and cols are sorted
    int row = 0;
    int col = m - 1;

    while(row < n && col >= 0) {
        if(key == matrix[row][col]) {
            cout << "Found at " << row << ", " << col << endl;
            return;
        } else if(key < matrix[row][col]) {
            col--;
        } else {
            row++;
        }
    }
    cout << "Key not found." << endl;
    return;
}

int main() {
    int matrix[][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    searchInSortedMatrix(matrix, 4, 4, 33);
}