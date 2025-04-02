#include <stdio.h>
#include <stdlib.h>

int missingNumber(int* nums, int numsSize) {
    int a;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (i != nums[i]) {
            return i;
        }
    }
    return numsSize;
}
