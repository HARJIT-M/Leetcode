class Solution {
    public int[] runningSum(int[] nums) {
        int[] b=new int[nums.length];
		int sum=0;
		int k=0;
		for(int i=0;i<nums.length;i++)
		{
		    sum+=nums[i];
            b[i]=sum;
        }
        return b;
    }
}