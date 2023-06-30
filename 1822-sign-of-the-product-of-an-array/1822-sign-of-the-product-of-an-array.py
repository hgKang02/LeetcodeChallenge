class Solution(object):
    def arraySign(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num = 1
        for i in nums:
            num *= i
            if num == 0:
                return 0
        
        if num < 0:
            return -1
        return 1
        
        