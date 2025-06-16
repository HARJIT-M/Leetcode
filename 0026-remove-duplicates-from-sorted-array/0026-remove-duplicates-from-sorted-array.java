class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0)
        {
            return 0;
        }
        int i=0;
        int j=1;
        while (j<nums.length) 
        {
            if (nums[j] != nums[i]) 
            {
                i++;
                nums[i] = nums[j];
            }
            j+=1;
        }
        return i+1;
    }
}