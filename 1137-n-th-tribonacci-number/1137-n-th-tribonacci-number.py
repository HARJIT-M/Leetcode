class Solution(object):
    def tribonacci(self, n):
        a=0
        b=1
        c=1
        if n==0:
            return 0
        elif n==1 or n==2:
            return 1
        else:
            for i in range(3,n+1,1):
                d=a+b+c
                a=b
                b=c
                c=d
            return d
        