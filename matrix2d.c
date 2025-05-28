#include <stdio.h>
#include <conio.h>

#define SIZE 2 // Define size of 2x2 matrices

void inputMatrix(int mat[SIZE][SIZE], char name);
void displayMatrix(int mat[SIZE][SIZE]);
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]);

void main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    clrscr();

    printf("-------- Matrix Multiplication --------\n");

    // Input for matrix 1
    inputMatrix(mat1, 'A');

    // Input for matrix 2
    inputMatrix(mat2, 'B');

    // Multiply the matrices
    multiplyMatrices(mat1, mat2, result);

    // Display the result
    printf("\n---------- Result: Multiplication Matrix ----------\n");
    displayMatrix(result);

    getch();
}

void inputMatrix(int mat[SIZE][SIZE], char name) {
    int i, j;
    printf("\nEnter elements of Matrix %c (%dx%d):\n", name, SIZE, SIZE);
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix %c:\n", name);
    displayMatrix(mat);
}

void displayMatrix(int mat[SIZE][SIZE]) {
    int i, j;
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
