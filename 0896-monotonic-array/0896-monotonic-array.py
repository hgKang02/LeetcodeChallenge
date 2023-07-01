class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) == 1 or len(nums) == 2:
            return True
        else:
            if nums[0] < nums[1]:
                mono = 'i'
            elif nums[0] > nums[1]:
                mono = 'd'
            else:
                mono = 's'
            for i in range(1, len(nums) - 1, 1):
                if mono == 'i' and nums[i] > nums[i + 1]:
                    return False
                elif mono == 'd' and nums[i] < nums[i + 1]:
                    return False
                elif mono == 's':
                    if nums[i] < nums[i + 1]:
                        mono = 'i'
                    elif nums[i] > nums[i + 1]:
                        mono = 'd'
            return True
                    
            
        