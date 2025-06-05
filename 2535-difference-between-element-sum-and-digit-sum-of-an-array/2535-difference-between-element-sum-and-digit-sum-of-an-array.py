class Solution(object):
    def differenceOfSum(self, nums):
        sum1=0
        sum2=0
        for i in range(0,len(nums)):
            sum1+=nums[i]
            while(nums[i]>0):
                a=nums[i]%10
                sum2+=a
                nums[i]/=10
        return sum1-sum2
        