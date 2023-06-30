class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
#         if digits[len(digits) - 1] == 9:
                
#         else:
#             digits[len(digits) - 1] += 1
        
#         return digits
        num = 0
        for i in range(len(digits)):
            num += digits[i] * 10 ** (len(digits) - 1 - i)
        num += 1
        result = []
        while num != 0:
            result.append(num % 10)
            num /= 10
            print(num)
        result.reverse()
        return result