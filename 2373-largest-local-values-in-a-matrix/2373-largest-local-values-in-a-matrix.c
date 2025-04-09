/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int newSize = gridSize - 2;
    int** result = malloc(newSize * sizeof(int*));
    *returnColumnSizes = malloc(newSize * sizeof(int));
    *returnSize = newSize;

    for (int i = 0; i < newSize; i++) {
        (*returnColumnSizes)[i] = newSize;
        result[i] = malloc(newSize * sizeof(int));
        for (int j = 0; j < newSize; j++) {
            int max = grid[i][j];
            for (int r = 0; r < 3; r++)
                for (int c = 0; c < 3; c++)
                    if (grid[i + r][j + c] > max)
                        max = grid[i + r][j + c];
            result[i][j] = max;
        }
    }

    return result;
}
