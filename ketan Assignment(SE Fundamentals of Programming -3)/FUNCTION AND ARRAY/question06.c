//Q-6 WAP to make addition, Subtraction and multiplication of two matrix using 
//2-D Array
#include<stdio.h>

// Function to add two matrices
int addmat(int mat1[2][2], int mat2[2][2], int result[2][2]){
    int i, j;
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
int submat(int mat1[2][2], int mat2[2][2], int result[2][2]){
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
int multimat(int mat1[2][2], int mat2[2][2], int result[2][2]){
    int i, j, k;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display the matrix
int display(int mat[2][2]){
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat1[2][2], mat2[2][2], result[2][2];
    int i, j;
    
    // Input elements of the first matrix
    printf("ENTER ELEMENTS OF FIRST MATRIX (2X2):\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("ENTER ELEMENTS OF SECOND MATRIX (2X2):\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Display first matrix
    printf("\nFIRST MATRIX:\n");
    display(mat1);
    
    // Display second matrix
    printf("\nSECOND MATRIX:\n");
    display(mat2);
    
    // Addition of matrices
    addmat(mat1, mat2, result);
    printf("ADDITION RESULT:\n");
    display(result);
    
    // Subtraction of matrices
    submat(mat1, mat2, result);
    printf("SUBTRACTION RESULT:\n");
    display(result);
    
    // Multiplication of matrices
    multimat(mat1, mat2, result);
    printf("MULTIPLICATION RESULT:\n");
    display(result);
    
    return 0;
}

