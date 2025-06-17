class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        int[] nums1 = new int[n];
        k %= n;
        int c = 0;

        for (int i = n - k; i < n; i++) 
        {
            nums1[c++] = nums[i];
        }

        for (int i = 0; i < n - k; i++) 
        {
            nums1[c++] = nums[i];
        }

        for (int i = 0; i < n; i++) 
        {
            nums[i] = nums1[i];
        }
    }
}
