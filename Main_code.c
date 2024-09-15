#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void matrix_vector_multiplication(int *matrix, int *vector, int *result, int rows, int cols) {
    #pragma omp parallel for
    for (int i = 0; i < rows; i++) {
        result[i] = 0;
        for (int j = 0; j < cols; j++) {
            result[i] += matrix[i * cols + j] * vector[j];
        }
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    
    // Changed matrix and vector values
    int matrix[9] = {2, 4, 6, 8, 10, 12, 14, 16, 18}; // 3x3 matrix
    int vector[3] = {3, 5, 7}; // 3-dimensional vector
    int result[3];

    matrix_vector_multiplication(matrix, vector, result, rows, cols);

    printf("Result:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
