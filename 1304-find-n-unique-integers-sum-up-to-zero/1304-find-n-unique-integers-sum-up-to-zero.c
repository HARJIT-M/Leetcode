/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *result=(int*)malloc(sizeof(int)*n);
    *returnSize=n;
    int index=0;
    for(int i=1;i<=n/2;i++)
    {
        result[index++]=-i;
        result[index++]=i;
    }
    if(n%2!=0)
    {
        result[index++]=0;
    }
    return result;
}