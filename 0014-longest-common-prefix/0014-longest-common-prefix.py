class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        result = ""
        
        if len(strs) <= 1:
            return strs[0]
        index = 0
        word = strs[0]
        strs.remove(word)
        for i in range(len(word)):
            is_match = False
            pre = word[i]
            for j in strs:
                if i >= len(j):
                    return result
                else:
                    if pre == j[i]:
                        is_match = True
                    else:
                        return result
            if is_match == True:
                result += pre
            else:
                break
                
            
        return result
        