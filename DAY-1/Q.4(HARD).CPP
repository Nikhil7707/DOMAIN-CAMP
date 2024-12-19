//HARD
/*Implement matrix operations in C++ using function overloading. Write a function operate() that can perform:
-	Matrix Addition for matrices of the same dimensions.
-	Matrix Multiplication where the number of columns of the first matrix equals the number of rows of the second matrix.*/

#include <iostream>
using namespace std;

class Matrix {
public:
    void operate(int a[3][3], int b[3][3], int result[3][3], int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = a[i][j] + b[i][j];
            }
        }
    }

    void operate(int a[3][3], int b[3][3], int result[3][3], int r1, int c1, int r2, int c2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    void display(int matrix[3][3], int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    cout << "Matrix A: " << endl;
    m.display(a, 3, 3);
    cout << "Matrix B: " << endl;
    m.display(b, 3, 3);

    m.operate(a, b, result, 3, 3);
    cout << "Matrix Addition Result: " << endl;
    m.display(result, 3, 3);

    int c[3][3] = {{1, 2}, {3, 4}, {5, 6}};
    int d[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int multiplyResult[3][3];

    cout << "Matrix C: " << endl;
    m.display(c, 3, 2);
    cout << "Matrix D: " << endl;
    m.display(d, 2, 3);

    m.operate(c, d, multiplyResult, 3, 2, 2, 3);
    cout << "Matrix Multiplication Result: " << endl;
    m.display(multiplyResult, 3, 3);

    return 0;
}

