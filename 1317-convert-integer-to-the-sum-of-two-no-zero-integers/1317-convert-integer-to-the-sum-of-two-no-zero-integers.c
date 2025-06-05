/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize) {
    int *result=(int*)malloc(sizeof(int)*2);
    *returnSize=2;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i+j==n && i%10!=0 && j%10!=0)
            {
                result[0]=i;
                result[1]=j;
                
            }
        }
    }
    return result;
}