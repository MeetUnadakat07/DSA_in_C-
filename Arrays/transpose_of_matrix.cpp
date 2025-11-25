#include<iostream>
// #include<algorithm>
using namespace std;

void transpose(int matrix[][4], int n, int m) {
    int tr_matrix[m][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            tr_matrix[j][i] = matrix[i][j];
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << tr_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose_square(int matrix[][3], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {3, 5, 8, 9}};
    int matrix2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(matrix, 3, 4);
    transpose_square(matrix2, 3);
}