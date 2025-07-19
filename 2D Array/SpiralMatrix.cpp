#include<iostream>
using namespace std;

void spiralmatrix(int matrix[][4], int n, int m) {
    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;

    while(srow <= erow && scol <= ecol) {
        // top row
        for(int col = scol; col <= ecol; col++) {
            cout << matrix[srow][col] << " ";
        }
        srow++;

        // right column
        for(int row = srow; row <= erow; row++) {
            cout << matrix[row][ecol] << " ";
        }
        ecol--;

        // bottom row
        if(srow <= erow) {
            for(int col = ecol; col >= scol; col--) {
                cout << matrix[erow][col] << " ";
            }
            erow--;
        }

        // left column
        if(scol <= ecol) {
            for(int row = erow; row >= srow; row--) {
                cout << matrix[row][scol] << " ";
            }
            scol++;
        }
    }
}

int main() {
    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    spiralmatrix(mat, 4, 4);

    return 0;
}
