class Solution(object):
    def calPoints(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        arr = []
        arr.append(int(operations[0]))
        for i in range(1, len(operations),1):
            if operations[i] == 'C':
                arr.pop()
            elif operations[i] == '+':
                arr.append(arr[-1] + arr[-2])
            elif operations[i] == 'D':
                arr.append(arr[-1] * 2)
            else:
                arr.append(int(operations[i]))

        return sum(arr)
        