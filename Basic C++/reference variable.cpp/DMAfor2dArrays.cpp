#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get rows and columns from user input
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for rows
    int** matrix = new int*[rows];

    // Dynamically allocate memory for each row
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Initialize matrix (optional)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;
        }
    }

    // Use the matrix
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for each row
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }

    // Deallocate memory for rows
    delete[] matrix;

    return 0;
}
