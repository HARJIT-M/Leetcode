int subsetXORSum(int* nums, int numsSize) {
    int sum=0;
    int totalsets=1<<numsSize;
    for(int i=0;i<totalsets;i++){
        int xor=0;
        for(int j=0;j<numsSize;j++){
            if(i&(1<<j))
                xor^=nums[j];
        }
        sum+=xor;
    }
    return sum;
}