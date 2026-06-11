/*****************************************************************

date:27/11/2024
name: jesbin shaju

aim: To write a C program for a menu-driven program for matrix operations
      (sum, product, transpose, read, display) using functions
******************************************************************/

#include <stdio.h>

void read(int matrix[100][100], int row, int col);
void display(int matrix[100][100], int row, int col);
void sum(int matrix1[100][100], int matrix2[100][100], int result[100][100], int row, int col);
void transpose(int matrix[100][100], int row, int col, int transposed[100][100]);
void multiplication(int matrix1[100][100], int matrix2[100][100], int result[100][100], int r1, int c1, int r2, int c2);

int main() {
    int choice, row, col, r1, c1, r2, c2;
    int matrix[100][100], matrix1[100][100], matrix2[100][100], result[100][100], transposed[100][100];

    do {
        printf("\n/******************/ MATRIX OPERATIONS /******************/\n");
        printf("1. Read and display a matrix\n");
        printf("2. Sum of two matrices\n");
        printf("3. Product of two matrices\n");
        printf("4. Transpose of a matrix\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of rows: ");
                scanf("%d", &row);
                printf("Enter the number of columns: ");
                scanf("%d", &col);

                read(matrix, row, col);
                printf("Matrix:\n");
                display(matrix, row, col);
                break;

            case 2:
                printf("Enter the number of rows: ");
                scanf("%d", &row);
                printf("Enter the number of columns: ");
                scanf("%d", &col);

                printf("Enter the elements of the first matrix:\n");
                read(matrix1, row, col);
                printf("Enter the elements of the second matrix:\n");
                read(matrix2, row, col);

                sum(matrix1, matrix2, result, row, col);
                printf("Sum of matrices:\n");
                display(result, row, col);
                break;

            case 3:
                printf("Enter the number of rows and columns for the first matrix: ");
                scanf("%d%d", &r1, &c1);
                printf("Enter the number of rows and columns for the second matrix: ");
                scanf("%d%d", &r2, &c2);

                if (c1 != r2) {
                    printf("Matrix multiplication not possible (columns of matrix1 must equal rows of matrix2).\n");
                } else {
                    printf("Enter the elements of the first matrix:\n");
                    read(matrix1, r1, c1);
                    printf("Enter the elements of the second matrix:\n");
                    read(matrix2, r2, c2);

                    multiplication(matrix1, matrix2, result, r1, c1, r2, c2);
                    printf("Product of matrices:\n");
                    display(result, r1, c2);
                }
                break;

            case 4:
                printf("Enter the number of rows: ");
                scanf("%d", &row);
                printf("Enter the number of columns: ");
                scanf("%d", &col);

                read(matrix, row, col);
                printf("Matrix:\n");
                display(matrix, row, col);

                transpose(matrix, row, col, transposed);
                printf("Transposed matrix:\n");
                display(transposed, col, row);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option (1-5).\n");
        }
    } while (choice != 5);

    return 0;
}

void read(int matrix[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display(int matrix[100][100], int row, int col) {
    printf("\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sum(int matrix1[100][100], int matrix2[100][100], int result[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void transpose(int matrix[100][100], int row, int col, int transposed[100][100]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void multiplication(int matrix1[100][100], int matrix2[100][100], int result[100][100], int r1, int c1, int r2, int c2) {
    // Initialize the result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
