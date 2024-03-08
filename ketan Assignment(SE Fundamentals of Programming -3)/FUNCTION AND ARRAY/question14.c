
//14.Perform 2D matrix array 

#include <stdio.h>

// Function to add two matrices
void addMatrix(int mat1[][2], int mat2[][2], int result[][2], int rows, int cols) {
	int i , j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrix(int mat1[][2], int mat2[][2], int result[][2], int rows, int cols) {
	int i , j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int mat1[][2], int mat2[][2], int result[][2], int rows, int cols) {
	int i , j , k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][2], int rows, int cols) {
    int i , j;
	for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    int i , j;
    // Input for the first matrix
    printf("Enter elements of first matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input for the second matrix
    printf("Enter elements of second matrix (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nFirst Matrix:\n");
    displayMatrix(mat1, 2, 2);

    printf("\nSecond Matrix:\n");
    displayMatrix(mat2, 2, 2);

    addMatrix(mat1, mat2, result, 2, 2);
    printf("\nAddition Result:\n");
    displayMatrix(result, 2, 2);

    subtractMatrix(mat1, mat2, result, 2, 2);
    printf("\nSubtraction Result:\n");
    displayMatrix(result, 2, 2);

    multiplyMatrix(mat1, mat2, result, 2, 2);
    printf("\nMultiplication Result:\n");
    displayMatrix(result, 2, 2);

    return 0;
}

