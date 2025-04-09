/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int count=0;
    int* result=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        int freq=1;
        int duplicate=0;
        for (int k = 0; k < i; k++) 
        {
            if (nums[k] == nums[i]) 
            {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) continue;
        for (int j = i + 1; j < numsSize; j++) 
        {
            if (nums[i] == nums[j]) freq++;
        }
         if (freq == 2)
         {
             result[count++] = nums[i];
         }
    }
    *returnSize = count;
    return result;
}