class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int prefix[]=new int[n];
        int suffix[]=new int[n];
        prefix[0]=1;
        suffix[n-1]=1;
        int prod=1;
        for(int i=0;i<n;i++)
        {
            prefix[i]=prod;
            prod = prod*nums[i];
        }
        
        prod=1;
        for(int i=n-1;i>=0;i--)
        {
            suffix[i]=prod;
            prod = prod * nums[i];
        }

        for(int i=0;i<n;i++)
        {
            nums[i] = prefix[i] * suffix[i];
        }
    return nums;
    }
}