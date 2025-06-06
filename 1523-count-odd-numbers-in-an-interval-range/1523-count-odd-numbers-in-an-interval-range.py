class Solution(object):
    def countOdds(self, low, high):
        if low%2!=0:
            count=1
        elif high%2!=0:
            count=1
        else:
            count=0
        counts=(high-low)//2
        total=count+counts
        return total
        