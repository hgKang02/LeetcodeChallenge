class Solution:
    def sortSentence(self, s: str) -> str:
        temp= s.split()
        word={}
        sol = ""
        for i in temp:
            word[i[-1]] = i[:-1]
        for j in sorted(word):
            sol = sol +"".join(word[j]) +  " "
        sol = sol[:-1]
        return sol