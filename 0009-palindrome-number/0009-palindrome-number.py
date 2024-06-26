class Solution(object):
    def isPalindrome(self, x):
        
        if x < 0:
            return False  # Negative numbers cannot be palindromes
        original_x = x
        reversed_x = 0

        while x > 0:
            digit = x % 10
            reversed_x = reversed_x * 10 + digit
            x //= 10
        return original_x == reversed_x

        