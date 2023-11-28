class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        number = 0
        for i in digits:
            number = number * 10 + i
        
        number = number + 1
        
        resultList = []
        while (number > 0):
            temp = number % 10
            number = number // 10  # Fix this line
            resultList.insert(0, temp)
            
        return resultList
