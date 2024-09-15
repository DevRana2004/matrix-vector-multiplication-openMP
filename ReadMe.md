### Prerequisites
- **OpenMP**: Ensure your compiler supports OpenMP (e.g., GCC).
- **GCC**: Install GCC if it's not already installed. On Ubuntu, you can use `sudo apt-get install gcc`.

### Setup
1. **Clone the repository**:
    ```sh
    git clone https://github.com/yourusername/matrix-multiplication-openmp.git
    cd matrix-multiplication-openmp
    ```

2. **Develop the Code**:
    - **Create a C File**: In your project directory (i.e., `matrix-multiplication-openmp`), create a file named `matrix_multiplication.c`.
    - **Write the Code**: Use the following C code to perform matrix multiplication in parallel with OpenMP.

### Compile the Code
Compile the code using GCC with OpenMP support in the terminal:
```sh
gcc -o matrix_multiplication matrix_multiplication.c -fopenmp
```

### Execute the Compiled Program
Run the compiled program:
```sh
./matrix_multiplication
```

### Explanation
- **matrix_multiplication**: Function that multiplies two matrices in parallel.
- **OpenMP Parallel For**: Used to parallelize the nested for loops to compute the matrix product.
