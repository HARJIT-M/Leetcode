class Solution(object):
    def arrayRankTransform(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        sorted_arr = sorted(arr)
        result = []
        rank_dict = {}
        rank = 1
        for num in sorted_arr:
            if num not in rank_dict:
                rank_dict[num] = rank
                rank += 1
        for num in arr:
            result.append(rank_dict[num])
        return result
        