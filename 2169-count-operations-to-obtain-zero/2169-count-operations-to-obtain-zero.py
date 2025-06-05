class Solution(object):
    def countOperations(self, num1, num2):
        count=0
        while(num2>0):
            if(num1==0 or num2==0):
                return 0
            elif(num1<=num2):
                num2=num2-num1
                count+=1
            else:
                num1=num1-num2
                count+=1
        return count