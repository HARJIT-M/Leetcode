class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        sum = 0
        count = 31
        while n > 0:
            bit = n % 2
            sum = sum + (bit * (2 ** count))
            n = n // 2
            count -= 1 
        return sum
