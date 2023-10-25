class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        list1 = [] 
        while n > 0:
            if n % 3 == 0 and n % 5 == 0:
                list1.insert(0,"FizzBuzz") 
            elif n % 5 == 0:
                list1.insert(0,"Buzz")
            elif n % 3 == 0:
                list1.insert(0,"Fizz")
            else:
                list1.insert(0,str(n))  
            n = n - 1
        return list1


