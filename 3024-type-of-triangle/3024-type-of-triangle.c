char* triangleType(int* nums, int numsSize) {
    if(nums[0]==nums[1] && nums[1]==nums[2])
    {
        return "equilateral";
    }
    if ((nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) && 
    (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[2] + nums[0] > nums[1])) {
    return "isosceles";
    }
    if(nums[0]!=nums[1] && nums[1]!=nums[2])
    {
        if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[2] + nums[0] > nums[1]) 
        {
    return "scalene";
        }
    }
    return "none";
}