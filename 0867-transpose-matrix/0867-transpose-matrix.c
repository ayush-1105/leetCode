/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int n = matrixSize;
    int m = *matrixColSize;

    // Allocate memory for the transposed matrix
    int** ans = (int**)malloc(m * sizeof(int*));
    *returnColumnSizes = (int*)malloc(m * sizeof(int));

    // Loop through each column of the transposed matrix
    for (int i = 0; i < m; i++) {
        // Allocate memory for each row in the transposed matrix
        ans[i] = (int*)malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;

        // Loop through each row of the original matrix
        for (int j = 0; j < n; j++) {
            // Transpose the elements from the original matrix to the transposed matrix
            ans[i][j] = matrix[j][i];
        }
    }

    // Set the size of the transposed matrix
    *returnSize = m;
    return ans;
}
