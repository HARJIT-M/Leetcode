class Solution(object):
    def pivotInteger(self, n):
        for i in range(1,n+1):
            sum1=0
            sum2=0
            for j in range(1,i+1):
                sum1+=j
            for k in range(i,n+1):
                sum2+=k
            if sum1==sum2:
                return i
        return -1
        