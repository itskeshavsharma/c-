#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** matrix;

public:
    // Constructor to initialize matrix with rows and columns
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols]();
        }
    }

    // Destructor to deallocate memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter elements of the matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) {
      
        Matrix result(this->rows, this->cols);  // Create a new Matrix to store the result

        // Perform element-wise addition
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = this->matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create two matrices
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    // Input values for both matrices
    matrix1.input();
    matrix2.input();

    // Add the matrices using the overloaded + operator
    Matrix result = matrix1 + matrix2;

    // Display the result of matrix addition
    cout << "Resultant Matrix after addition:\n";
    result.display();

    return 0;
}
