int findNumbers(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        int c=0;
        while(nums[i]>0)
        {
            
            int a=nums[i]%10;
            c+=1;
            nums[i]/=10;
        }
        if(c%2==0)
        {
            count+=1;
        }
    }
    return count;
}