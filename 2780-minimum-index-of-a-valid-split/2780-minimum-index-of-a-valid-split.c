int minimumIndex(int* nums, int numsSize) {
    int candidate = nums[0], count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    int totalOccurrences = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            totalOccurrences++;
        }
    }
    int leftCount = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == candidate) {
            leftCount++;
        }
        
        int leftSize = i + 1; 
        int rightSize = numsSize - leftSize;
        
        if (leftCount * 2 > leftSize && (totalOccurrences - leftCount) * 2 > rightSize) {
            return i;
        }
    }
    return -1;
}