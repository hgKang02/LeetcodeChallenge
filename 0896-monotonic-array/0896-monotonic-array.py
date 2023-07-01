class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        inc = dec = True
        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                inc = False
            elif nums[i] < nums[i + 1]:
                dec = False
        
        return inc or dec
                    
            
        