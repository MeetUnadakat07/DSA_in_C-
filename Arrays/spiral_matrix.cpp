#include<iostream>
using namespace std;

void spiralOrder(int matrix[][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while((srow <= erow) && (scol <= ecol)) {
        // top 
        for(int j = scol; j <= ecol; j++) {
            cout << matrix[srow][j] << " ";
        }
    
        // right 
        for(int i = srow + 1; i <= erow; i++) {
            cout << matrix[i][ecol] << " ";
        }
    
        // bottom
        for(int j = ecol - 1; j >= scol; j--) {
            if(srow == erow) {              // edge case for odd order matrix in which if we are in the middle and if the elements are been printed by the top then no need to print with bottom also
                break;
            }
            cout << matrix[erow][j] << " ";
        }
    
        // left 
        for(int i = erow - 1; i >= srow + 1; i--) {
            if(scol == ecol) {          // edge case for odd order matrix in which if we are in the middle and if the elements are been printed by the right then no need to print with left also
                break;
            }
            cout << matrix[i][scol] << " ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << endl;
}

int main() {
    int matrix1[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matrix2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    spiralOrder(matrix1, 4, 4);
    spiralOrder(matrix2, 3, 4);
}