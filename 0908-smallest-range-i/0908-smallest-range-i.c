int smallestRangeI(int* nums, int numsSize, int k) {
    int max = nums[0],min = nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max){
            max = nums[i];
        }
        if(nums[i]<min){
            min = nums[i];
        }
    }
    int s = max - min - 2*k;
    return (s>0?s:0);
}