/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int a;
    int *result=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0)
        {
            result[i]=0;
        }
        else
        {
            result[i]=1;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(result[i]>result[j])
            {
                a=result[i];
                result[i]=result[j];
                result[j]=a;
            }
        }
    }
    return result;
}