int minimumOperations(int* nums, int numsSize) {
    int count=0;
    while(count*3<numsSize)
    {
        int start=count*3;
        int duplicate=0;
        for(int i=start;i<numsSize;i++)
        {
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[i]==nums[j])
                {
                    duplicate=1;
                    break;
                }
            }
        }
        if(!duplicate)
        {
            return count;
        }
        count++;
    }
    return count;
}