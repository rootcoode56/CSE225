#include <iostream>

using namespace std;

// Function to execute multiplication two matrices//
void Matrix_multiplication(int **A, int **B, int **C, int row_A, int col_A, int col_B) {
    int i,j,k;
    for (i = 0; i < row_A; i+=1) {
        for (j = 0; j < col_B; j+=1) {
            C[i][j] = 0;
            for (k = 0; k < col_A; k+=1) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function for taking input of matrix elements from user//
void input_Matrix(int **matrix, int row, int col) {
    cout << "Enter elements of the matrix:" << endl;
    int i,j;
    for (i = 0; i < row; i+=1) {
        for (j = 0; j < col; j+=1) {
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int row_A, col_A, row_B, col_B;

    // Input size of matrices A and B
    cout << "Size of Matrix A(Row & Column)--> ";
    cin >> row_A >> col_A;

    cout << "\nSize of Matrix B(Row & Column--> ";
    cin >> row_B >> col_B;

    // Check if matrices can be multiplied
    if (col_A != row_B) {
        cout << "Matrices cannot be multiplied. As the number of columns in A/B is not equal to the number of rows in A/B.";
        return 1;
    }

    // Dynamically allocated memory for matrices(A, B and C)//
    int **A = new int*[row_A];
    for (int i = 0; i < row_A; i+=1) {
        A[i] = new int[col_A];
    }

    int **B = new int*[row_B];
    for (int i = 0; i < row_B; i+=1) {
        B[i] = new int[col_B];
    }

    int **C = new int*[row_A];
    for (int i = 0; i < row_A; i+=1) {
        C[i] = new int[col_B];
    }

    // Input the elements of matrix A//
    cout << "\nMatrix A--> " << endl;
    input_Matrix(A, row_A, col_A);

    // Input the elements of matrix B//
    cout << "\nMatrix B--> " << endl;
    input_Matrix(B, row_B, col_B);

    // Multiply the two matrices A and B//
    Matrix_multiplication(A, B, C, row_A, col_A, col_B);

    // Output the result matrix C//
    cout << "\nResultant matrix C--> " << endl;
    for (int i = 0; i < row_A; i+=1) {
        for (int j = 0; j < col_B; j+=1) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate dynamically allocated memory to Matrix C//
    for (int i = 0; i < row_A; i+=1) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < row_B; i+=1) {
        delete[] B[i];
    }
    delete[] B;

    for (int i = 0; i < row_A; i+=1) {
        delete[] C[i];
    }
    delete[] C;

    cout<<"\nMemory deallocated successfully!"<<endl;

    return 0;
}
