#include <stdio.h>
int min(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    return c;
}

    int findLargestSquareSubmatrix(int matrix[100][100], int rows, int col) {
// To store the size of the largest square submatrix
    int maxSize = 0; 
// To store the row of the top-left corner of the largest square submatrix
    int maxRow = 0; 
// To store the column of the top-left corner of the largest square submatrix
    int maxCol = 0;  

// A 2D array to store the size of the square submatrix at each position
    int arr[100][100]; 

// Initialize the first row and first column of arr
    for (int i = 0; i < rows; i++) {
        arr[i][0] = matrix[i][0];
    }

    for (int j = 0; j < col; j++) {
        arr[0][j] = matrix[0][j];
    }

// Fill in the dp array using dynamic programming
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < col; j++) {
            if (matrix[i][j] == 1) {
                arr[i][j] = min(arr[i - 1][j], arr[i][j - 1], arr[i - 1][j - 1]) + 1;
                if (arr[i][j] > maxSize) {
                    maxSize = arr[i][j];
                    maxRow = i - maxSize + 1;
                    maxCol = j - maxSize + 1;
                }
            } else {
                arr[i][j] = 0;
            }
        }
    }

// Displaying the largest square submatrix
    printf("The largest square submatrix of 1s has dimensions %d x %d:\n", maxSize, maxSize);
    for (int i = maxRow; i < maxRow + maxSize; i++) {
        for (int j = maxCol; j < maxCol + maxSize; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return maxSize;
}

int main() {
    int rows, col;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[100][100];

    // Input the binary matrix
    printf("Enter the binary matrix (0s and 1s):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSize = findLargestSquareSubmatrix(matrix, rows, col);

    printf("The largest square submatrix has size %dx%d.\n", maxSize, maxSize);

    return 0;
}//end main

