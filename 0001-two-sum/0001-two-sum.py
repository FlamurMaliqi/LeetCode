from ast import List
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
       
        for i in range(0, len(nums)):
          for j in range(1, len(nums)):
            if (nums[i]+nums[j] == target and i != j):
              List = [i,j]
              return List
        