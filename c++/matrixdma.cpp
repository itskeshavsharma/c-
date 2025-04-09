#include <iostream>
using namespace std;

class Matrix {
private:
    int row, col;
    int** mat; // Pointer to dynamically allocate a 2D array

public:
    // Constructor to initialize dimensions and allocate space
    Matrix(int x, int y) {
        row = x;
        col = y;

        // Allocate space for the matrix
        mat = new int*[row];
        for (int i = 0; i < row; i++) {
            mat[i] = new int[col];
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < row; i++) {
            delete[] mat[i];
        }
        delete[] mat;
    }

    // Function to input matrix elements
    void getMatrix() {
        cout << "Enter elements of the matrix (" << row << "x" << col << "):\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to print the matrix
    void printMatrix() {
        cout << "Matrix:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overloading the '+' operator for matrix addition
    Matrix operator+(Matrix& m) {
        if (row != m.row || col != m.col) {
            throw invalid_argument("Matrices dimensions must match for addition.");
        }

        // Create a new matrix for the result
        Matrix result(row, col);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    // Create two matrices of size 3x3
    Matrix m1(3, 3), m2(3, 3);

    // Input values for both matrices
    m1.getMatrix();
    m2.getMatrix();

    // Display the matrices
    cout << "Matrix 1:\n";
    m1.printMatrix();

    cout << "Matrix 2:\n";
    m2.printMatrix();

    // Add the matrices and display the result
    try {
        Matrix m3 = m1 + m2;
        cout << "Resultant Matrix after addition:\n";
        m3.printMatrix();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}