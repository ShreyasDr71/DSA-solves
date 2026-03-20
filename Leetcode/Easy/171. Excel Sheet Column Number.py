class Solution(object):
    def titleToNumber(self, columnTitle):
        n=len(columnTitle)
        answer,pos=0,0
        for i in reversed(columnTitle):
            digit=ord(i)-64
            answer+=digit * 26**pos
            pos+=1
        return answer
