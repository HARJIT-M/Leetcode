/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** result = (char**)malloc(n * sizeof(char*));
    if (!result) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i - 1] = strdup("FizzBuzz");
        } else if (i % 3 == 0) {
            result[i - 1] = strdup("Fizz");
        } else if (i % 5 == 0) {
            result[i - 1] = strdup("Buzz");
        } else {
            result[i - 1] = (char*)malloc(12 * sizeof(char));  
            sprintf(result[i - 1], "%d", i);
        }
    }

    return result;
}