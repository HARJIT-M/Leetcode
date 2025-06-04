
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int* seen = (int*)calloc(numsSize, sizeof(int)); 
    int count=0;
    for (int i = 0; i < numsSize; i++) {
        seen[nums[i] - 1] = 1;
    }

    // Find missing numbers
    for (int i = 0; i < numsSize; i++) {
        if (seen[i] == 0) {
            result[count++] = i + 1;
        }
    }

    *returnSize = count;
    free(seen);
    return result;
}