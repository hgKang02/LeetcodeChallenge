class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        
        temps = [None for i in range(len(nums))]
        
        self.merge_sort(nums, 0, len(nums) - 1, temps)
        
        return nums
        
    def merge_sort(self, nums, start, end, temps):
        if start >= end:
            return
        
        
        mid = start + (end - start) // 2
        
        
        self.merge_sort(nums, start, mid, temps)
        self.merge_sort(nums, mid + 1, end, temps)
        
        return self.merge(nums, start, mid, end, temps)
    
    
    def merge(self, nums, start, mid, end, temps):
        
        index = start

        i = start
        j = mid + 1
        
        while i <= mid and j <= end:
            if nums[i] <= nums[j]:
                temps[index] = nums[i] 
                i += 1
            else:
                temps[index] = nums[j] 
                j += 1            
            
            index += 1
                
        while i <= mid:
            temps[index] = nums[i]
            i += 1
            index += 1
                
        while j <= end:
            temps[index] = nums[j]
            j += 1
            index += 1
            
        for i in range(start, end + 1):
            nums[i] = temps[i]
        