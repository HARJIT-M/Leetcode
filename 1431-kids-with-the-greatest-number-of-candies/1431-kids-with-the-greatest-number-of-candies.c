/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize= candiesSize;
    bool* result=(bool*)malloc(candiesSize*sizeof(bool));
    int max=0;
    int count=0;
    for(int i=0;i<candiesSize;i++)
    {
        if(max<candies[i])
        {
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++)
    {
        int newsum=candies[i]+extraCandies;
        if(newsum<max)
        {
            result[count++]=0;
        }
        else
        {
            result[count++]=1;
        }
    }
    return result;
}