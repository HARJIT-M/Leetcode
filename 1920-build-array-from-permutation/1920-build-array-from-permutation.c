/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *result=(int*)malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<numsSize;i++)
    {
        result[i]=nums[nums[i]];
    }
    return result;
}